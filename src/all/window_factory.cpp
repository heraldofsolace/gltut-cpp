// Sarvottamananda (shreesh)
// 2020-09-29
// window_factory.cpp v0.0 (OpenGL Code Snippets)
//
// Factory design pattern for window creation
//

#include "window_factory.h"

#include <iostream>
#include <stdexcept>

Window*
Window_factory::create_window(Window_type type)
{
    extern Window* create_glfw_window();

    switch (type) {
        case (Window_type::glfw):
            return create_glfw_window();
        default:
            throw std::runtime_error("Invalid window type to create");
    }
}

void
Window_factory::destroy_window(Window* win, Window_type type)
{
    extern void destroy_glfw_window(Window*);

    switch (type) {
        case (Window_type::glfw):
            destroy_glfw_window(win);
            return;
        default:
            throw std::runtime_error("Invalid window type to destroy");
    }
}
