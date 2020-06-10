#include <iostream>
#include <SDL2/SDL.h>

#include "merlin/game.hpp"
#include "merlin/event_manager.hpp"

namespace Merlin {

    EventManager::EventManager() {}

    void EventManager::process_events() {
        if(SDL_PollEvent(&this -> current_event) != 0) {
            if(current_event.type == SDL_QUIT) {
                std::cout << "QUITERO!" << std::endl;
                Game::instance().stop();
            }
        }
    }

}
