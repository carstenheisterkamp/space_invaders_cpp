cmake_minimum_required(VERSION 3.28)
project(SpaceInvadersCPP LANGUAGES CXX)

# This policy fixes the "CMake < 3.5" compatibility error from the Raylib subproject.
set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare( # Corrected typo: 'F' and 'C' should be capitalized
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.0
        GIT_SHALLOW ON
)

FetchContent_MakeAvailable(raylib)

add_executable(SpaceInvadersCPP src/main.cpp
        src/SpaceShip.cpp
        src/SpaceShip.h
        src/Game.cpp
        src/Game.h
        src/Laser.cpp
        src/Laser.h
        src/Block.cpp
        src/Block.h
        src/Obstacle.cpp
        src/Obstacle.h
        src/Alien.cpp
        src/Alien.h
        src/MysteryShip.cpp
        src/MysteryShip.h)
target_link_libraries(SpaceInvadersCPP raylib)