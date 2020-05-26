#include "domain/hashes/SHA1Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA1Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}