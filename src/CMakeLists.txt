cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets Core REQUIRED)
set(LIBRARIES Qt5::Widgets Qt5::Core)

set(CMAKE_CXX_STANDARD 20)

set(SOURCEFILES
        domain/hashes/Keccak224Hash.cpp
        domain/hashes/Keccak256Hash.cpp
        domain/hashes/Keccak384Hash.cpp
        domain/hashes/Keccak512Hash.cpp
        domain/hashes/MD4Hash.cpp
        domain/hashes/MD5Hash.cpp
        domain/hashes/SHA1Hash.cpp
        domain/hashes/SHA3_224Hash.cpp
        domain/hashes/SHA3_256Hash.cpp
        domain/hashes/SHA3_384Hash.cpp
        domain/hashes/SHA3_512Hash.cpp
        domain/hashes/SHA224Hash.cpp
        domain/hashes/SHA256Hash.cpp
        domain/hashes/SHA384Hash.cpp
        domain/hashes/SHA512Hash.cpp
        domain/HashFactory.cpp

        gui/MainWindow/MainWindow.cpp

        main.cpp
)

set(HEADERFILES
        domain/hashes/Keccak224Hash.hpp
        domain/hashes/Keccak256Hash.hpp
        domain/hashes/Keccak384Hash.hpp
        domain/hashes/Keccak512Hash.hpp
        domain/hashes/MD4Hash.hpp
        domain/hashes/MD5Hash.hpp
        domain/hashes/SHA1Hash.hpp
        domain/hashes/SHA3_224Hash.hpp
        domain/hashes/SHA3_256Hash.hpp
        domain/hashes/SHA3_384Hash.hpp
        domain/hashes/SHA3_512Hash.hpp
        domain/hashes/SHA224Hash.hpp
        domain/hashes/SHA256Hash.hpp
        domain/hashes/SHA384Hash.hpp
        domain/hashes/SHA512Hash.hpp

        domain/HashFactory.hpp
        domain/IHash.hpp

        gui/MainWindow/MainWindow.hpp
)

add_executable(
        ${BINARY_NAME}
        ${HEADERFILES}
        ${SOURCEFILES}
        ../resources/resources.qrc
)

# Libraries
target_link_libraries(${BINARY_NAME} PUBLIC ${LIBRARIES})

if (APPLE)
    add_custom_command(
            TARGET ${BINARY_NAME}
            POST_BUILD
            COMMAND macdeployqt bin/${BINARY_NAME}.app
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )
elseif (WIN32)
    add_custom_command(
            TARGET ${BINARY_NAME}
            POST_BUILD
            COMMAND windeployqt bin/Release/${BINARY_NAME}.exe
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

    add_custom_command(
            TARGET ${BINARY_NAME}
            POST_BUILD
            COMMAND copy bin/Release ../packaging/windows/application/data
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

    add_custom_command(
            TARGET ${BINARY_NAME}
            POST_BUILD
            COMMAND binarycreator -c config.xml -p . HashGeneratorInstaller
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/../packaging/windows
    )
endif ()