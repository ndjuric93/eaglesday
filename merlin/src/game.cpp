#include "merlin/game.hpp"
#include "merlin/window.hpp"

namespace Merlin {

    Game::Game(int width, int height) {
        this -> window = Window("Eagle's Day", height, width);
    }

    Game::~Game() {
        SDL_Quit();
    }

    int Game::run() {
        return 0;
    }

}
