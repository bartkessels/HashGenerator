#include <catch2/catch.hpp>

#include "domain/hashes/SHA1Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA1 hash", "[SHA1Hash]")
{
    // Arrange
    const auto& sut = new SHA1Hash();
    const std::string& expectedSHA1Hash = "a94a8fe5ccb19ba61c4c0873d391e987982fbbd3";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA1Hash == result);
}