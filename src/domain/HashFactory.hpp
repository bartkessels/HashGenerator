#pragma once

#include <list>
#include <map>
#include <memory>

#include "domain/hashes/Keccak224Hash.hpp"
#include "domain/hashes/Keccak256Hash.hpp"
#include "domain/hashes/Keccak384Hash.hpp"
#include "domain/hashes/Keccak512Hash.hpp"
#include "domain/hashes/MD4Hash.hpp"
#include "domain/hashes/MD5Hash.hpp"
#include "domain/hashes/SHA1Hash.hpp"
#include "domain/hashes/SHA3_224Hash.hpp"
#include "domain/hashes/SHA3_256Hash.hpp"
#include "domain/hashes/SHA3_384Hash.hpp"
#include "domain/hashes/SHA3_512Hash.hpp"
#include "domain/hashes/SHA224Hash.hpp"
#include "domain/hashes/SHA256Hash.hpp"
#include "domain/hashes/SHA384Hash.hpp"
#include "domain/hashes/SHA512Hash.hpp"

#include "domain/IHash.hpp"

namespace hashgen::domain
{
    class HashFactory
    {
    public:
        HashFactory();
        ~HashFactory() = default;

        void registerHash(const std::string& name, std::shared_ptr<IHash> hash);
        std::shared_ptr<IHash> getHash(const std::string& name);
        std::list<std::string> getAvailableAlgorithms();

    private:
        std::map<std::string, std::shared_ptr<IHash>> hashes;
    };
}