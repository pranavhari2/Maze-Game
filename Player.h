#ifndef PLAYER_H
#define PLAYER_H
#include "Being.h"
#include "Stack.h"

using namespace std;

class Maze;

class Player : public Being
{
    public:
        Maze* maze;
        Player(string, int, int);
        virtual ~Player();
        void checkKey();
        void AutoMove(Maze*, Stack*, Player*, int,int,int,int);

    protected:

    private:
};


#endif // PLAYER_H
