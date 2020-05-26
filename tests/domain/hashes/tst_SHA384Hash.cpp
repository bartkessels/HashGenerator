#include <catch2/catch.hpp>

#include "domain/hashes/SHA384Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA384 hash", "[SHA384Hash]")
{
    // Arrange
    const auto& sut = new SHA384Hash();
    const std::string& expectedSHA384Hash = "768412320f7b0aa5812fce428dc4706b3cae50e02a64caa16a782249bfe8efc4b7ef1ccb126255d196047dfedf17a0a9";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA384Hash == result);
}