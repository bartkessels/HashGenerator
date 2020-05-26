#include "domain/hashes/SHA256Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA256Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}