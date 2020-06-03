#ifndef __MERLIN__WINDOW__HPP_
#define __MERLIN__WINDOW__HPP_

#include <memory>
#include <functional>
#include <SDL2/SDL.h>

using WindowPointer = std::unique_ptr<SDL_Window, std::function<void(SDL_Window *)>>;
using SurfacePointer = std::unique_ptr<SDL_Surface>;

namespace Merlin {

    class Window {
        public:
            Window(std::string title = "", int screen_height = 640, int screen_width = 480);
            WindowPointer& get_window();
            SurfacePointer& get_surface();

        private:
            void window_destroyer(SDL_Window* w);
            WindowPointer window;
            SurfacePointer surface; 
    };

}

#endif
