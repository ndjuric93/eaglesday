#include <memory>

#include "merlin/game.hpp"
#include "merlin/window.hpp"

// TODO: Implement game configuration in file, remove hardcoded window init.

namespace Merlin {

    Game* Game::game = nullptr;
    
    Game& Game::instance() {
        if(game == nullptr) {
            game = new Game("Eagle's Day", 640, 480);
        }
        return *game;
    }

    Game::Game(std::string title, int height, int width):
            window(Window(title, width, height)),
            asset_mgr(AssetManager(this -> window)),
            event_mgr(EventManager()),
            running(true) {
    }

    Game::~Game() {
        SDL_Quit();
    }

    int Game::run() {
        while(this -> running) {
            this -> event_mgr.process_events();
        }
        return 0;
    }

    void Game::stop() {
        this -> running = false;
    }

    Window& Game::get_window() {
        return this -> window;
    }

    AssetManager& Game::get_asset_manager() {
        return this -> asset_mgr;
    }

}
