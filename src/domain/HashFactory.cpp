#include "domain/HashFactory.hpp"

using namespace hashgen::domain;

#include <iostream>

/**
 * Register all available hashes
 *
 */
HashFactory::HashFactory()
{
    // Keccak-x
    registerHash("Keccak-224", std::make_shared<hashes::Keccak224Hash>());
    registerHash("Keccak-256", std::make_shared<hashes::Keccak256Hash>());
    registerHash("Keccak-384", std::make_shared<hashes::Keccak384Hash>());
    registerHash("Keccak-512", std::make_shared<hashes::Keccak512Hash>());

    // MDx
    registerHash("MD4", std::make_shared<hashes::MD4Hash>());
    registerHash("MD5", std::make_shared<hashes::MD5Hash>());

    // SHAx
    registerHash("SHA1", std::make_shared<hashes::SHA1Hash>());
    registerHash("SHA224", std::make_shared<hashes::SHA224Hash>());
    registerHash("SHA256", std::make_shared<hashes::SHA256Hash>());
    registerHash("SHA384", std::make_shared<hashes::SHA384Hash>());
    registerHash("SHA512", std::make_shared<hashes::SHA512Hash>());

    // SHA3-x
    registerHash("SHA3-224", std::make_shared<hashes::SHA3_224Hash>());
    registerHash("SHA3-256", std::make_shared<hashes::SHA3_256Hash>());
    registerHash("SHA3-384", std::make_shared<hashes::SHA3_384Hash>());
    registerHash("SHA3-512", std::make_shared<hashes::SHA3_512Hash>());
}

void HashFactory::registerHash(const std::string& name, std::shared_ptr<IHash> hash)
{
    this->hashes.insert({name, std::move(hash)});
}

std::shared_ptr<IHash> HashFactory::getHash(const std::string& name)
{
    return this->hashes.at(name);
}

std::list<std::string> HashFactory::getAvailableAlgorithms()
{
    std::list<std::string> availableAlgorithms;

    for (const auto& [algorithm, hash]: hashes) {
        availableAlgorithms.push_back(algorithm);
    }

    return availableAlgorithms;
}