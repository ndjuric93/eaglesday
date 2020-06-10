#ifndef __MERLIN__WINDOW__HPP_
#define __MERLIN__WINDOW__HPP_

#include <vector>
#include <memory>
#include <functional>
#include <SDL2/SDL.h>

#include "merlin/image_bmp.hpp"

using WindowPointer = std::unique_ptr<SDL_Window, std::function<void(SDL_Window *)>>;
using SurfacePointer = std::unique_ptr<SDL_Surface>;

namespace Merlin {

    class Window {
        public:
            Window(std::string title = "", int screen_height = 640, int screen_width = 480);
            Window(const Window& window); // copy ctor;

            Window& operator=(const Window& window);

            ~Window();

            void add_image(const ImageBmp& image);

            const WindowPointer& get_raw_window() const;
            const SurfacePointer& get_surface() const;

        private:
            WindowPointer window;
            SurfacePointer surface; 

            // std::vector<ImageBmp> images;
    };

}

#endif
