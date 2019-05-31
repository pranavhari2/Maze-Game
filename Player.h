#ifndef PLAYER_H
#define PLAYER_H
#include "Being.h"
#include "Maze.h"

using namespace std;

class Player : public Being
{
    public:
        Maze* maze;
        Player(string, int, int);
        virtual ~Player();
        int movePlayer(Maze, string);

    protected:

    private:
};


#endif // PLAYER_H
