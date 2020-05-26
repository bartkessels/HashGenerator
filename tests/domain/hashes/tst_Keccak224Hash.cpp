#include <catch2/catch.hpp>

#include "domain/hashes/Keccak224Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate Keccack-224 hash", "[Keccak224Hash]")
{
    // Arrange
    const auto& sut = new Keccak224Hash();
    const std::string& expectedKeccak224Hash = "3be30a9ff64f34a5861116c5198987ad780165f8366e67aff4760b5e";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedKeccak224Hash == result);
}