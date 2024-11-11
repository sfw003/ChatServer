# Automatically generated by scripts/boost/generate-ports.ps1

vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO boostorg/describe
    REF boost-${VERSION}
    SHA512 6dae1a712b2d3270163f37d7d1761e48c860f9339f1acb64e481056f1e9018222d44a176848a7a704e97a94d1c5b514fec7d5fb532ec179deca1d51984f11326
    HEAD_REF master
)

set(FEATURE_OPTIONS "")
boost_configure_and_install(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS ${FEATURE_OPTIONS}
)