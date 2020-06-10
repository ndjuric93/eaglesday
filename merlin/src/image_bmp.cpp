#include <string>
#include <iostream>
#include <SDL2/SDL.h>

#include "merlin/image_bmp.hpp"

using SurfacePointer = std::unique_ptr<SDL_Surface>;

namespace Merlin {
    
    ImageBmp::ImageBmp(std::string file_path) {
        this -> path = file_path;
        this -> image_surface = SurfacePointer(SDL_LoadBMP(file_path.c_str()));
        if(this -> image_surface == nullptr) {
            std::cout << "[ERROR] Cannot load file at: " << file_path << std::endl;
        }
    }

    ImageBmp::ImageBmp(const ImageBmp& image) {
        this -> path = image.get_path();
        this -> image_surface = SurfacePointer(SDL_LoadBMP(path.c_str()));
    }

    ImageBmp& ImageBmp::operator=(const ImageBmp& image) {
        if(this != &image) {
            *this = ImageBmp(image.get_path());
        }
        return *this;
    }

    const std::string ImageBmp::get_path() const {
        return this -> path;
    }

    SDL_Surface* ImageBmp::get_surface() const {
        return this -> image_surface.get();
    }

}
