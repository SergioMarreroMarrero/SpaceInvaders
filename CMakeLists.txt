cmake_minimum_required(VERSION 4.0)
project(SpaceInvaders)
set(CMAKE_CXX_STANDARD 20)

# ayuda a encontrar paquetes de MSYS2
set(CMAKE_PREFIX_PATH "C:/msys64/ucrt64")

find_package(SFML 2.6 COMPONENTS system window graphics REQUIRED)

add_executable(SpaceInvaders main.cpp
        Player.cpp
        Player.h
        Bullet.cpp
        Bullet.h
        Atlas.h)
target_link_libraries(SpaceInvaders PRIVATE sfml-graphics sfml-window sfml-system)

file(COPY ${CMAKE_SOURCE_DIR}/spritesheet.png
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
