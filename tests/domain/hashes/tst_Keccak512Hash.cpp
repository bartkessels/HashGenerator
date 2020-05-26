#include <catch2/catch.hpp>

#include "domain/hashes/Keccak512Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate Keccack-512 hash", "[Keccak512Hash]")
{
    // Arrange
    const auto& sut = new Keccak512Hash();
    const std::string& expectedKeccak512Hash = "1e2e9fc2002b002d75198b7503210c05a1baac4560916a3c6d93bcce3a50d7f00fd395bf1647b9abb8d1afcc9c76c289b0c9383ba386a956da4b38934417789e";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedKeccak512Hash == result);
}