#include "User.h"
#include <iostream>

User::User(const std::string& name, Blockchain* blockchain)
    : name(name), blockchain(blockchain) {}

void User::sendInvite(User& other) {
    other.invitesReceived.insert(name);
}

void User::acceptInvite(User& other) {
    if (invitesReceived.count(other.name)) {
        blockchain->addTransaction("SYSTEM", name, 1.0);
        blockchain->addTransaction("SYSTEM", other.name, 1.0);
        invitesReceived.erase(other.name);
    }
}

void User::sendToken(const std::string& receiver, double amount) {
    blockchain->addTransaction(name, receiver, amount);
}

