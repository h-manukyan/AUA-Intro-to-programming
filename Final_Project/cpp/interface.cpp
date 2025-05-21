#include "Blockchain.h"
#include <map>
#include <string>
#include <cstring>

static Blockchain chain(4);

extern "C" {

bool create_user(const char* username) {
    // Dummy logic: Assume all users are accepted.
    return true;
}

bool connect_users(const char* user1, const char* user2) {
    chain.addTransaction("SYSTEM", user1, 1.0);
    chain.addTransaction("SYSTEM", user2, 1.0);
    return true;
}

bool transfer_token(const char* from, const char* to, double amount) {
    chain.addTransaction(from, to, amount);
    return true;
}

const char* get_balances() {
    static std::string result;
    auto balances = chain.getBalances();
    result = "{";
    for (auto it = balances.begin(); it != balances.end(); ++it) {
        if (it != balances.begin()) result += ", ";
        result += "\"" + it->first + "\": " + std::to_string(it->second);
    }
    result += "}";
    return result.c_str();
}
}

