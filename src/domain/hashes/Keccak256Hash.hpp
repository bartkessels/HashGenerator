#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class Keccak256Hash: public IHash
    {
    public:
        Keccak256Hash() = default;
        ~Keccak256Hash() override = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Keccak_256;
    };
}