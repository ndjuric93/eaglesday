#include <memory>

#include <SDL2/SDL.h>

#include "merlin/window.hpp"


Merlin::Window::Window(std::string title, int screen_height, int screen_width) {
    SDL_Window* window = SDL_CreateWindow(
        title.c_str(),
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        screen_width,
        screen_height,
        SDL_WINDOW_SHOWN
    );
    this -> window = WindowPointer(window, SDL_DestroyWindow);
    this -> surface = SurfacePointer(SDL_GetWindowSurface(this -> window.get()));
}

WindowPointer& Merlin::Window::get_window() {
    return this -> window;
}

SurfacePointer& Merlin::Window::get_surface() {
    return this -> surface;
}
