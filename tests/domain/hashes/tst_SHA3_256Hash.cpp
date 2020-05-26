#include <catch2/catch.hpp>

#include "domain/hashes/SHA3_256Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA3-256 hash", "[SHA3_256Hash]")
{
    // Arrange
    const auto& sut = new SHA3_256Hash();
    const std::string& expectedSHA3_256Hash = "36f028580bb02cc8272a9a020f4200e346e276ae664e45ee80745574e2f5ab80";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA3_256Hash == result);
}