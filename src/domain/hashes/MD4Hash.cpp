#include "domain/hashes/MD4Hash.hpp"

using namespace hashgen::domain::hashes;

std::string MD4Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}