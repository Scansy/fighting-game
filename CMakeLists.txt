cmake_minimum_required(VERSION 4.0)
project(fighting_game)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(fighting_game main.cpp)

target_link_libraries(fighting_game PRIVATE sfml-graphics sfml-window sfml-system)