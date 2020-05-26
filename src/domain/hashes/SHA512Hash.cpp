#include "domain/hashes/SHA512Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA512Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}