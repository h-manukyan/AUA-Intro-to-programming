#include "Blockchain.h"
#include <iostream>

Blockchain::Blockchain(int difficulty) : difficulty(difficulty) {
    chain.emplace_back(0, "SYSTEM", "SYSTEM", 0.0, "0");
    chain[0].mineBlock(difficulty);
}

const Block& Blockchain::getLastBlock() const {
    return chain.back();
}

void Blockchain::addTransaction(const std::string& sender, const std::string& receiver, double amount) {
    Block newBlock(chain.size(), sender, receiver, amount, getLastBlock().hash);
    newBlock.mineBlock(difficulty);
    chain.push_back(newBlock);
}

const std::vector<Block>& Blockchain::getChain() const {
    return chain;
}

std::map<std::string, double> Blockchain::getBalances() const {
    std::map<std::string, double> balances;
    for (const auto& block : chain) {
        if (block.sender != "SYSTEM")
            balances[block.sender] -= block.amount;
        balances[block.receiver] += block.amount;
    }
    return balances;
}

