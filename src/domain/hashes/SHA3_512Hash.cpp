#include "domain/hashes/SHA3_512Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA3_512Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}