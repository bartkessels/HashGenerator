#include <catch2/catch.hpp>

#include "domain/hashes/Keccak384Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate Keccack-384 hash", "[Keccak384Hash]")
{
    // Arrange
    const auto& sut = new Keccak384Hash();
    const std::string& expectedKeccak384Hash = "53d0ba137307d4c2f9b6674c83edbd58b70c0f4340133ed0adc6fba1d2478a6a03b7788229e775d2de8ae8c0759d0527";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedKeccak384Hash == result);
}