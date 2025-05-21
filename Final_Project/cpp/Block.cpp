#include "Block.h"
#include "utils.h"
#include <sstream>

Block::Block(int idx, const std::string& send, const std::string& recv, double amt, const std::string& prev)
    : index(idx), sender(send), receiver(recv), amount(amt), prevHash(prev), nonce(0) {
    timestamp = currentTimestamp();
    hash = calculateHash();
}

std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << timestamp << sender << receiver << amount << prevHash << nonce;
    return sha256(ss.str());
}

void Block::mineBlock(int difficulty) {
    std::string prefix(difficulty, '0');
    while (hash.substr(0, difficulty) != prefix) {
        nonce++;
        hash = calculateHash();
    }
}

