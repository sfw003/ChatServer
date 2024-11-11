# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/atomic
    REF boost-${VERSION}
    SHA512 9296704de816cfa3a262d7d49b39431565ca24e65c9503fcef068c65f1bdd08f4c451a1355cb107ffd1c3d6dbf54a5a09c0e2b7b3658e78eeada1f4517494536
    HEAD_REF master
    PATCHES
        fix-include.patch
        
)

set(FEATURE_OPTIONS "")
boost_configure_and_install(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS ${FEATURE_OPTIONS}
)