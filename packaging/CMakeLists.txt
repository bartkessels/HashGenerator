cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR})

if (WIN32)
endif (WIN32)

if (APPLE)
    set_target_properties(${BINARY_NAME} PROPERTIES MACOSX_BUNDLE TRUE)
    set_target_properties(
        ${BINARY_NAME}
        PROPERTIES
        RESOURCE "macos/icons/hashgen.icns"
    )

    set(COMPLETE_BINARY_NAME hashgen.app)
    set(MACOSX_FRAMEWORK_ICON_FILE ../../resources/icons/main.svg)
    set(MACOSX_FRAMEWORK_IDENTIFIER net.bartkessels.hashgen)
else()
    install(TARGETS ${APP_NAME}
            RUNTIME DESTINATION bin)
endif(APPLE)

if (UNIX AND NOT APPLE)
endif (UNIX AND NOT APPLE)

install(CODE "
    include(BundleUtilities)
    fixup_bundle(${CMAKE_INSTALL_PREFIX}/bin/${COMPLETE_BINARY_NAME} \"\" \"\")
" COMPONENT Runtime)
