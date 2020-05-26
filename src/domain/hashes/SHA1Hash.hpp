#pragma once

#include <string>
#include <QCryptographicHash>

#include "domain/IHash.hpp"

namespace hashgen::domain::hashes
{
    class SHA1Hash: public IHash
    {
    public:
        SHA1Hash() = default;
        ~SHA1Hash() override = default;

        std::string hash(const std::string&) override;

    private:
        const QCryptographicHash::Algorithm algorithm = QCryptographicHash::Algorithm::Sha1;
    };
}