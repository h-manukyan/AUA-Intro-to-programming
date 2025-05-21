#pragma once
#include <string>

class Block {
public:
    int index;
    std::string timestamp;
    std::string sender;
    std::string receiver;
    double amount;
    std::string prevHash;
    std::string hash;
    int nonce;

    Block(int idx, const std::string& send, const std::string& recv, double amt, const std::string& prev);
    std::string calculateHash() const;
    void mineBlock(int difficulty);
};

