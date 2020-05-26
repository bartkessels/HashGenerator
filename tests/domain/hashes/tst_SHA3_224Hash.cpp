#include <catch2/catch.hpp>

#include "domain/hashes/SHA3_224Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA3-224 hash", "[SHA3_224Hash]")
{
    // Arrange
    const auto& sut = new SHA3_224Hash();
    const std::string& expectedSHA3_224Hash = "3797bf0afbbfca4a7bbba7602a2b552746876517a7f9b7ce2db0ae7b";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA3_224Hash == result);
}