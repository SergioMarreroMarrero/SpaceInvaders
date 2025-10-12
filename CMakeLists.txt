cmake_minimum_required(VERSION 4.0)
project(SpaceInvaders)
set(CMAKE_CXX_STANDARD 20)

# ayuda a encontrar paquetes de MSYS2
set(CMAKE_PREFIX_PATH "C:/msys64/ucrt64")

find_package(SFML 2.6 COMPONENTS system window graphics REQUIRED)

add_executable(
        SpaceInvaders src/main.cpp
        src/Player.cpp
        include/Player.h
        src/Bullet.cpp
        include/Bullet.h
        include/Atlas.h)
target_link_libraries(SpaceInvaders PRIVATE sfml-graphics sfml-window sfml-system)
set(ASSETS_DIR ${CMAKE_SOURCE_DIR}/assets)
file(COPY ${ASSETS_DIR}/
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/assets)
