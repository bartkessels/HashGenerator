#include "domain/hashes/MD5Hash.hpp"

using namespace hashgen::domain::hashes;

std::string MD5Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
        .toHex()
        .constData();
}