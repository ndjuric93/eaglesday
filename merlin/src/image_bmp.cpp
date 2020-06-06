#include <string>

#include <SDL2/SDL.h>

#include "merlin/image_bmp.hpp"

using SurfacePointer = std::unique_ptr<SDL_Surface>;

namespace Merlin {
    
    ImageBmp::ImageBmp(std::string file_path) {
        this -> image_surface = SurfacePointer(SDL_LoadBMP(file_path.c_str()));
        if(this -> image_surface == nullptr) {
            std::cout << "[ERROR] Cannot load file at: " << file_path << std::endl;
        }
    }

    ImageBmp::~ImageBmp() {
        SDL_FreeSurface(this -> image_surface.get());
    }

}
