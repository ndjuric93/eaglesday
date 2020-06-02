#ifndef __MERLIN__GAME__HPP_
#define __MERLIN__GAME__HPP_

#include "merlin/window.hpp"

namespace Merlin {

    class Game {
        public:
            Game(int screen_width, int screen_height);
            int run();
        private:
            Window window;
    };

}

#endif
