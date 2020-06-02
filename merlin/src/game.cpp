#include "merlin/game.hpp"
#include "merlin/window.hpp"

Merlin::Game::Game(int width, int height) {
    this -> window = Window("Eagle's Day", height, width);
}

int Merlin::Game::run() {
    return 0;
}
