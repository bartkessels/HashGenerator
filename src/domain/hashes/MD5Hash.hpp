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
        ~MD5Hash() = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Md5;
    };
}