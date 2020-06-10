#include <iostream>
#include <memory>

#include <SDL2/SDL.h>

#include "merlin/image_bmp.hpp"
#include "merlin/window.hpp"

namespace Merlin {

    Window::Window(std::string title, int screen_height, int screen_width) {
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

    Window::~Window() {
        SDL_FreeSurface(this -> surface.get());
        SDL_DestroyWindow(this -> window.get());
    }

    Window::Window(const Window& window) {
        this -> window = WindowPointer(window.get_raw_window().get());
        this -> surface = SurfacePointer(window.get_surface().get());
    }

    Window& Window::operator=(const Window& window) {
        if(this != &window) {
            *this = Window(window);
        }
        return *this;
    }

    void Window::add_image(const ImageBmp& image) {
        SDL_BlitSurface(image.get_surface(), nullptr, this -> surface.get(), nullptr);
        SDL_UpdateWindowSurface(this -> window.get());
    }

    const WindowPointer& Window::get_raw_window() const {
        return this -> window;
    }

    const SurfacePointer& Window::get_surface() const {
        return this -> surface;
    }

}
