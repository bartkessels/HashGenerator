#include <catch2/catch.hpp>

#include "domain/hashes/SHA256Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA256 hash", "[SHA256Hash]")
{
    // Arrange
    const auto& sut = new SHA256Hash();
    const std::string& expectedSHA256Hash = "9f86d081884c7d659a2feaa0c55ad015a3bf4f1b2b0b822cd15d6c15b0f00a08";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA256Hash == result);
}