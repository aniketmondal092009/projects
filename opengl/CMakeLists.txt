cmake_minimum_required(VERSION 3.10)
project(opengltest)

add_executable(app
    src/main.cpp
    external/glad/src/glad.c
)

target_include_directories(app PRIVATE
    external/glad/include
)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

target_link_libraries(app
    OpenGL::GL
    glfw
)
