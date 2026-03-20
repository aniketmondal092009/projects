#include <GL/gl.h>
#include <cstddef>
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main (int argc, char *argv[]) {
    std::cout << "hello world" << std::endl;

    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "sample opengl window", NULL, NULL);


    if (window == NULL) {
        std::cout << "failed to create glfw window" << std::endl;

        glfwTerminate();

        return -1;
    }

    glfwMakeContextCurrent(window);

    gladLoadGL();

    glViewport(0, 0, 800, 600);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
