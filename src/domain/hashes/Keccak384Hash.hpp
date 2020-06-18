#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class Keccak384Hash: public IHash
    {
    public:
        Keccak384Hash() = default;
        ~Keccak384Hash() = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Keccak_384;
    };
}