cmake_minimum_required(VERSION 3.10)

project(Sgtest)

add_executable(${PROJECT_NAME})

find_package(GTest CONFIG REQUIRED)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(${PROJECT_NAME} PRIVATE
    main.cpp
)


target_link_libraries(${PROJECT_NAME} PRIVATE
    GTest::gtest
    GTest::gmock
)

