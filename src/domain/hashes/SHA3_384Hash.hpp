#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class SHA3_384Hash: public IHash
    {
    public:
        SHA3_384Hash() = default;
        ~SHA3_384Hash() override = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Sha3_384;
    };
}