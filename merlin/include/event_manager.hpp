#ifndef __MERLIN__EVENT_MANAGER_HPP
#define __MERLIN__EVENT_MANAGER_HPP

#include <memory>
#include <SDL2/SDL.h>

namespace Merlin {
    
    class EventManager {
        public:
            EventManager();

            void process_events();

        private:
            SDL_Event current_event;
    };
    
} // namespace Merlin


#endif
