#ifndef __MERLIN__IMAGE_BMP_HPP_
#define __MERLIN__IMAGE_BMP_HPP_

#include <iostream>
#include <string>
#include <memory>

#include <SDL2/SDL.h>


using SurfacePointer = std::unique_ptr<SDL_Surface>;

namespace Merlin {
    class ImageBmp {
            ImageBmp(std::string path);
            ~ImageBmp();
        private:
            SurfacePointer image_surface;
    };
};

#endif
