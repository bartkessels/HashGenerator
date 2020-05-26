#include "domain/hashes/Keccak384Hash.hpp"

using namespace hashgen::domain::hashes;

std::string Keccak384Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}