#include "domain/hashes/SHA3_224Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA3_224Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}