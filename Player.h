#ifndef PLAYER_H
#define PLAYER_H

#include "Being.h"


class Player : public Being
{
    public:
        Player(string, int, int);
        virtual ~Player();
        int movePlayer();

    protected:

    private:
};

#endif // PLAYER_H
