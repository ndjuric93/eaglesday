#include <iostream>
#include <string>

#include "merlin/image_bmp.hpp"
#include "merlin/asset_manager.hpp"

namespace Merlin {

    void AssetManager::add_image(std::string image_path) {
        std::cout << "Image 1" << std::endl;
        auto image = ImageBmp(image_path);
        std::cout << "Image 2" << std::endl;
        this -> images.push_back(image);
        std::cout << "Image 3" << std::endl;
        this -> game_window.add_image(image);
        std::cout << "Image 4" << std::endl;
    }

} // namespace Merlin
