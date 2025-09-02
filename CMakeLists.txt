cmake_minimum_required(VERSION 3.28)
project(fighting_game LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(fighting_game src/main.cpp
        include/Player.h
        include/Stage.h
        include/GameManager.h
        include/PlayerConfig.h
        src/Player.cpp
        src/GameManager.cpp
)

target_link_libraries(fighting_game PRIVATE sfml-graphics sfml-window sfml-system)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)