#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class Keccak512Hash: public IHash
    {
    public:
        Keccak512Hash() = default;
        ~Keccak512Hash() = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Keccak_512;
    };
}