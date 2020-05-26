#include <catch2/catch.hpp>

#include "domain/hashes/SHA3_384Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA3-384 hash", "[SHA3_384Hash]")
{
    // Arrange
    const auto& sut = new SHA3_384Hash();
    const std::string& expectedSHA384_Hash = "e516dabb23b6e30026863543282780a3ae0dccf05551cf0295178d7ff0f1b41eecb9db3ff219007c4e097260d58621bd";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA384_Hash == result);
}