#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <GLES2/gl2.h>

/* Window Class
 * Handles the following tasks for OpenGL:
 * - Creates a window for the GL context
 * - Provides a swap-buffer implementation to call in the rendering loop
 *
 * In order to interface with different frameworks, different implementations
 * will be defined. The build infrastructure will take care of including the
 * correct windowing system
 */
class Window
{
public:
	virtual void swapBuffers() const = 0;
};
#endif /* _WINDOW_H_ */
