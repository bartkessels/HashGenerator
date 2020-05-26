#include "domain/hashes/Keccak256Hash.hpp"

using namespace hashgen::domain::hashes;

std::string Keccak256Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}