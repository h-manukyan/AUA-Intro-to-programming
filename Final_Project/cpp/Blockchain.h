#pragma once
#include "Block.h"
#include <vector>
#include <string>
#include <map>

class Blockchain {
private:
    std::vector<Block> chain;
    int difficulty;

public:
    Blockchain(int difficulty = 4);
    void addTransaction(const std::string& sender, const std::string& receiver, double amount);
    const Block& getLastBlock() const;
    const std::vector<Block>& getChain() const;
    std::map<std::string, double> getBalances() const;
};

