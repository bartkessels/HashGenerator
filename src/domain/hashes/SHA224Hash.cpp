#include "domain/hashes/SHA224Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA224Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}