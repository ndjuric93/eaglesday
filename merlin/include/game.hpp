#ifndef __GAME__HPP_
#define __GAME__HPP_

class Game {
    public:
        Game(int screen_width, int screen_height);
        int run();
    private:
        int screen_width;
        int screen_height;
};

#endif
