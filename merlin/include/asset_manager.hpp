#ifndef __MERLIN_ASSET_MANAGER__HPP_
#define __MERLIN_ASSET_MANAGER__HPP_


#include <vector>
#include <string>

#include <SDL2/SDL.h>

#include "merlin/window.hpp"
#include "merlin/asset_manager.hpp"
#include "merlin/image_bmp.hpp"

namespace Merlin {
    
    class AssetManager {
        public:
            AssetManager(Window& window): game_window(window) {}
            
            AssetManager(const AssetManager&) = default;
            AssetManager(AssetManager&&) = default;

            void add_image(std::string image_path);

        private:
            Window& game_window;
            std::vector<ImageBmp> images;
    };

} // namespace Merlin

#endif
