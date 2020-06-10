#ifndef __MERLIN__GAME__HPP_
#define __MERLIN__GAME__HPP_

#include <memory>


#include "merlin/window.hpp"
#include "merlin/asset_manager.hpp"
#include "merlin/event_manager.hpp"


namespace Merlin {

    class Game {
        public:
            static Game& instance();

            Game(const Game&) = delete;
            Game(Game&&) = delete;
            ~Game();

            Game operator=(const Game&) = delete;
            Game operator=(Game&&) = delete;

            int run();
            void stop();

            Window& get_window();
            AssetManager& get_asset_manager();

        private:
            static Game* game;
            Game(std::string title, int height, int width);
            Window window;
            AssetManager asset_mgr;
            EventManager event_mgr;

            bool running;
    };

}

#endif
