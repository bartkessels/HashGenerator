#include <catch2/catch.hpp>

#include "domain/hashes/SHA3_512Hash.hpp"

using namespace hashgen::domain::hashes;

TEST_CASE("Validate SHA3-512 hash", "[SHA3_512Hash]")
{
    // Arrange
    const auto& sut = new SHA3_512Hash();
    const std::string& expectedSHA3_512Hash = "9ece086e9bac491fac5c1d1046ca11d737b92a2b2ebd93f005d7b710110c0a678288166e7fbe796883a4f2e9b3ca9f484f521d0ce464345cc1aec96779149c14";
    const std::string& data = "test";

    // Act
    const std::string& result = sut->hash(data);

    // Assert
    CHECK(expectedSHA3_512Hash == result);
}