#include "domain/hashes/SHA384Hash.hpp"

using namespace hashgen::domain::hashes;

std::string SHA384Hash::hash(const std::string& data)
{
    return QCryptographicHash::hash(data.c_str(), algorithm)
            .toHex()
            .constData();
}