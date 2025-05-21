#pragma once
#include <string>
#include <set>
#include "Blockchain.h"

class User {
public:
    std::string name;
    std::set<std::string> invitesReceived;
    Blockchain* blockchain;

    User(const std::string& name, Blockchain* blockchain);
    void sendInvite(User& other);
    void acceptInvite(User& other);
    void sendToken(const std::string& receiver, double amount);
};

