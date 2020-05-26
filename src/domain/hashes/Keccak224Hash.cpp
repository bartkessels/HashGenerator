#include "domain/hashes/Keccak224Hash.hpp"

using namespace hashgen::domain::hashes;

std::string Keccak224Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}