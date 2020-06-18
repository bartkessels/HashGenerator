#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class SHA256Hash: public IHash
    {
    public:
        SHA256Hash() = default;
        ~SHA256Hash() = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Sha256;
    };
}