#include <catch2/catch.hpp>

#include "domain/hashes/MD5Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate MD5 hash", "[MD5Hash]")
{
    // Arrange
    const auto& sut = new MD5Hash();
    const std::string& expectedMD5Hash = "098f6bcd4621d373cade4e832627b4f6";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedMD5Hash == result);
}