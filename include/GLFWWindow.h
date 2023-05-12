#ifndef _GLFWWINDOW_H_
#define _GLFWWINDOW_H_

#include "Window.h"

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class GLFWWindow : public Window
{
private:
	uint32_t width;
	uint32_t height;
	GLFWwindow* window;

	void error_callback(int error, const char* description);
	void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
public:
	GLFWWindow();
	~GLFWWindow();
	void swapBuffers() const;
};

#endif /* _GLFWWINDOW_H_ */
