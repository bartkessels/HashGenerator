#include <catch2/catch.hpp>

#include "domain/hashes/SHA224Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA224 hash", "[SHA224Hash]")
{
    // Arrange
    const auto& sut = new SHA224Hash();
    const std::string& expectedSHA224Hash = "90a3ed9e32b2aaf4c61c410eb925426119e1a9dc53d4286ade99a809";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA224Hash == result);
}