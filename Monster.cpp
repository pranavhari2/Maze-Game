#include "Monster.h"
#include "Being.h"
#include <iostream>

Monster::Monster(string _name, int _health, int _strength):Being::Being(_name, _health, _strength)
{
    //ctor
}

Monster::~Monster()
{
    //dtor
}

int Monster::getParticularLocation(int yval, int xval)
{
    if (maze->maze[yval][xval] == blnk)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}


void Monster::Move(Maze* maze)
{
    int right = getParticularLocation(yLocation, xLocation+1);
    int left = getParticularLocation(yLocation, xLocation-1);
    int down = getParticularLocation(yLocation+1, xLocation);
    int up  = getParticularLocation(yLocation-1, xLocation);

    if (right == 0)
    {

    }

    else if (left == 0)
    {
        maze->maze[yLocation][xLocation] = blnk;
        maze->maze[yLocation][xLocation-1] = 'M';
    }

    else if (down == 0)
    {
        maze->maze[yLocation][xLocation] = blnk;
        maze->maze[yLocation+1][xLocation] = 'M';
    }

    else if (up == 0)
    {
        maze->maze[yLocation][xLocation] = blnk;
        maze->maze[yLocation-1][xLocation] = 'M';
    }

    return;
}


