cmake_minimum_required(VERSION 3.10)

project(Slogger)

add_executable(${PROJECT_NAME})

find_package(spdlog CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(gflags CONFIG REQUIRED)

target_sources(${PROJECT_NAME} PRIVATE
    logger.hpp
    main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    spdlog::spdlog
    gflags::gflags
)