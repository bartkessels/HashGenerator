#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class MD5Hash: public IHash
    {
    public:
        MD5Hash() = default;
        ~MD5Hash() override = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Md5;
    };
}
/*
QCryptographicHash::Keccak_224	7	Generate a Keccak-224 hash sum. Introduced in Qt 5.9.2
QCryptographicHash::Keccak_256	8	Generate a Keccak-256 hash sum. Introduced in Qt 5.9.2
QCryptographicHash::Keccak_384	9	Generate a Keccak-384 hash sum. Introduced in Qt 5.9.2
QCryptographicHash::Keccak_512
 */