#ifndef __MERLIN__IMAGE_BMP_HPP_
#define __MERLIN__IMAGE_BMP_HPP_

#include <iostream>
#include <string>
#include <memory>

#include <SDL2/SDL.h>


using SurfacePointer = std::unique_ptr<SDL_Surface>;

namespace Merlin {
    class ImageBmp {
        public:
            ImageBmp(std::string path);
            
            ImageBmp(const ImageBmp& image);

            ImageBmp& operator=(const ImageBmp&);

            const std::string get_path() const;

            // TODO: Shared pointer maybe?
            SDL_Surface* get_surface() const;

        private:
            std::string path;
            SurfacePointer image_surface;
    };
};

#endif
