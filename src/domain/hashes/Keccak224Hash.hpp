#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class Keccak224Hash: public IHash
    {
    public:
        Keccak224Hash() = default;
        ~Keccak224Hash() = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Keccak_224;
    };
}