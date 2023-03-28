#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <GLES2/gl2.h>

#ifdef PLATFORM_GLFW
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#endif

/* Window Class
 * Handles the following tasks for OpenGL:
 * - Creates a window for the GL context
 * - Provides a swap-buffer implementation to call in the rendering loop
 *
 * In order to interface with different frameworks, different implementations
 * will be defined, separated by the PLATFORM_* preprocessor definition.
 */
class Window
{
public:
	Window();
	~Window();

	void swapBuffers();
};
#endif /* _WINDOW_H_ */
