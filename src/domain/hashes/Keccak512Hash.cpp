#include "domain/hashes/Keccak512Hash.hpp"

using namespace hashgen::domain::hashes;

std::string Keccak512Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}