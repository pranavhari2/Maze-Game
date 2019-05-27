#include "Player.h"
#include "Being.h"
#include "Maze.h"

Player::Player(string _name, int _health, int _strength):Being::Being( _name, _health, _strength)
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void movePlayer(string dir)
{
    if (dir == up)
    {
        --yLocation;
    }

    else if (dir == down)
    {
        ++yLocation
    }

    else if (dir == "left")
    {
        --xLocation;
    }
}


