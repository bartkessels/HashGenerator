cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

find_package(Qt5 COMPONENTS Core REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

set(SRCFILES
        ../src/domain/hashes/Keccak224Hash.cpp
        ../src/domain/hashes/Keccak256Hash.cpp
        ../src/domain/hashes/Keccak384Hash.cpp
        ../src/domain/hashes/Keccak512Hash.cpp
        ../src/domain/hashes/MD4Hash.cpp
        ../src/domain/hashes/MD5Hash.cpp
        ../src/domain/hashes/SHA1Hash.cpp
        ../src/domain/hashes/SHA3_224Hash.cpp
        ../src/domain/hashes/SHA3_256Hash.cpp
        ../src/domain/hashes/SHA3_384Hash.cpp
        ../src/domain/hashes/SHA3_512Hash.cpp
        ../src/domain/hashes/SHA224Hash.cpp
        ../src/domain/hashes/SHA256Hash.cpp
        ../src/domain/hashes/SHA384Hash.cpp
        ../src/domain/hashes/SHA512Hash.cpp
)

set(TST_SRCFILES
        domain/hashes/tst_Keccak224Hash.cpp
        domain/hashes/tst_Keccak256Hash.cpp
        domain/hashes/tst_Keccak384Hash.cpp
        domain/hashes/tst_Keccak512Hash.cpp
        domain/hashes/tst_MD4Hash.cpp
        domain/hashes/tst_MD5Hash.cpp
        domain/hashes/tst_SHA1Hash.cpp
        domain/hashes/tst_SHA3_224Hash.cpp
        domain/hashes/tst_SHA3_256Hash.cpp
        domain/hashes/tst_SHA3_384Hash.cpp
        domain/hashes/tst_SHA3_512Hash.cpp
        domain/hashes/tst_SHA224Hash.cpp
        domain/hashes/tst_SHA256Hash.cpp
        domain/hashes/tst_SHA384Hash.cpp
        domain/hashes/tst_SHA512Hash.cpp

        main.cpp
)

add_executable(hashgen_tests ${SRCFILES} ${TST_SRCFILES})

# Include directories for dependencies
include_directories(../src)

# Libraries
target_link_libraries(hashgen_tests Qt5::Core)
target_link_libraries(hashgen_tests Catch2::Catch2)

add_test(NAME hashgen_tests  COMMAND hashgen_tests)