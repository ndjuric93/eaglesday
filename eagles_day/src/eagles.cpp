#include <iostream>

#include "merlin/game.hpp"

int main() {
    Game game = Game(640, 480);
    std::cout << "Starting game Eagles Day" << std::endl;
    int value = game.run();
    std::cout << value << std::endl;
    return 0;
}
