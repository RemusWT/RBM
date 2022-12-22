#include "engine.h"

void opengl_print_error() {
    GLenum error = glGetError();
    switch (error) {
    case GL_NO_ERROR:
        break;
    case GL_INVALID_ENUM:
        printf("GL_INVALID_ENUM detected! Enumeration parameter is not legal.\n");
        break;
    case GL_INVALID_VALUE:
        printf("GL_INVALID_VALUE detected! Value parameter is not legal.\n");
        break;
    case GL_INVALID_OPERATION:
        printf("GL_INVALID_OPERATION detected! State for a command is not legal for its given parameters.\n");
        break;
    case GL_STACK_OVERFLOW:
        printf("GL_STACK_OVERFLOW detected! A stack pushing operation causes a stack overflow.\n");
        break;
    case GL_STACK_UNDERFLOW:
        printf("GL_STACK_UNDERFLOW detected! A stack popping operation occured while the stack was at its lowest point.\n");
        break;
    case GL_OUT_OF_MEMORY:
        printf("GL_OUT_OF_MEMORY detected! A memory allocation couldn't allocate (enough) memory.\n");
        break;
    case GL_INVALID_FRAMEBUFFER_OPERATION:
        printf("GL_INVALID_FRAMEBUFFER_OPERATION detected! A reading or a writing operation occured to a framebuffer that is not complete.\n");
        break;
    }
}
