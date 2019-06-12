#ifndef MONSTER_H
#define MONSTER_H
#include "Being.h"
#include "Maze.h"
#include <iostream>

class Maze;

class Monster : public Being
{
    public:
        Maze* maze;
        Monster(string, int, int);
        virtual ~Monster();
        void Move(Maze*);
        int getParticularLocation(int,int);

    protected:

    private:
};



#endif // MONSTER_H
