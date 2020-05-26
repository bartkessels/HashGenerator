#include <catch2/catch.hpp>

#include "domain/hashes/SHA512Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA512 hash", "[SHA512Hash]")
{
    // Arrange
    const auto& sut = new SHA512Hash();
    const std::string& expectedSHA512Hash = "ee26b0dd4af7e749aa1a8ee3c10ae9923f618980772e473f8819a5d4940e0db27ac185f8a0e1d5f84f88bc887fd67b143732c304cc5fa9ad8e6f57f50028a8ff";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA512Hash == result);
}