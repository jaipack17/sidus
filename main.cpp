#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace std;

int main() {
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "Sidus", NULL, NULL);

	if (window == NULL) {
		cout << "Error starting the engine. Window not found." << endl;
		glfwTerminate();
		return -1;
	}

	cout << "Started the engine successfully. Sidus is now running." << endl;

	glfwMakeContextCurrent(window);

	gladLoadGL();

	glViewport(0, 0, 800, 600);

	glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	while (!glfwWindowShouldClose(window)) {

		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	cout << "Terminated successfully.";

	return 0;
}