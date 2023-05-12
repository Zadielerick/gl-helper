#include "GLFWWindow.h"
#include <boost/bind.hpp>

/* GLFW Window */

/* Constructor */
GLFWWindow::GLFWWindow()
{
	glfwSetErrorCallback(error_callback);
	if (!glfwInit())
	{
		return -1;
	}

	this->window = glfwCreateWindow(this->width, this->height, "Test Window", NULL, NULL);
	if (!window)
	{
		fprintf(stderr, "Failed to open GLFW window.\n");
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(this->window);
	glfwSetKeyCallback(this->window, key_callback);

	GLenum err = glewInit();
	if (err != GLEW_OK)
	{
		fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
		glfwDestroyWindow(window);
		glfwTerminate();
		return -1;
	}
	return 0;

}

/* Private functions */
void GLFWWindow::error_callback(int error, const char* description)
{
	fputs(description, stderr);
}

void GLFWWindow::key_callback(int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(this->window, GL_TRUE);
}

/* GLFW Window Destructor */
GLFWWindow::~GLFWWindow()
{

}

GLFWWindow::swapBuffers()
{
	glfwSwapBuffers(this->window);
	glfwPollEvents();
}
