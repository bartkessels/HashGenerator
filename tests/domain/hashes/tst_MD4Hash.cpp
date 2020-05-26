#include <catch2/catch.hpp>

#include "domain/hashes/MD4Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate MD4 hash", "[MD4Hash]")
{
    // Arrange
    const auto& sut = new MD4Hash();
    const std::string& expectedMD4Hash = "db346d691d7acc4dc2625db19f9e3f52";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedMD4Hash == result);
}