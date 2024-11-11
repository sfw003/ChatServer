# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/compute
    REF boost-${VERSION}
    SHA512 2bbd253f0cf89d8cd34c4a3813b0b42dd8bd8e68c8e2a10b5637c247b3e532ff97ff2abb03be0f030f1710e655d89eab336e7a4b9fb92a3477f213daaf419f05
    HEAD_REF master
    PATCHES
        opt-filesystem.diff
)

set(FEATURE_OPTIONS "")
boost_configure_and_install(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS ${FEATURE_OPTIONS}
)