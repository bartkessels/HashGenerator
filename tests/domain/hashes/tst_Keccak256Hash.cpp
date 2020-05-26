#include <catch2/catch.hpp>

#include "domain/hashes/Keccak256Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate Keccack-256 hash", "[Keccak256Hash]")
{
    // Arrange
    const auto& sut = new Keccak256Hash();
    const std::string& expectedKeccak256Hash = "9c22ff5f21f0b81b113e63f7db6da94fedef11b2119b4088b89664fb9a3cb658";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedKeccak256Hash == result);
}