
#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "opengl_basic_wrapper.h"

/* I think we should write several header files but each should contain a different amount of abstraction.
   Right now this Engine header file is starting to be mixing these things.
   I really like the idea of a single header file for all source files but its not really that good.
   So I decided we should separate a lot of these header stuff into multiple files.
   We should separate them by the level of abstraction and their modularity.
   
   Filesystem header separated because of modularity.
   General data types, opengl simple wrappers and stuff like this should be included in a header file
   as engine_basic.h
   Most headers files that contain the word basic means they are a low level wrapper around fundamental stuff
   and that they are the inner workings for higher level functionality. These headers should not be touched
   often.
   rcf_basic, input_basic, filehandling_basic etc.
   
 */




// DEBUGGING
void opengl_print_error();


// OPENGL SETUP


// WINDOW
void window_validate(GLFWwindow *window);



// TEXTURES
// We might have to rename this to Texture2D but for experimenting's sake its fine.




#endif
