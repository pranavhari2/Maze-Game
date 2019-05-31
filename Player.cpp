#include <iostream>
#include "Being.h"
#include "Maze.h"
#include "Player.h"

Player::Player(string _name, int _health, int _strength):Being::Being( _name, _health, _strength)
{
    //ctor
}

Player::~Player()
{
    //dtor
}

int Player::movePlayer(Maze maze, string dir)
{
    int val;

    if (dir == "U")
    {
        /*
        val = maze.getParticularMazeLocation(xLocation, yLocation-1);
        cout << val;

        if (val == 1)
        {
            return 0;
        }
        */

        yLocation++;
        return yLocation;

    }

    else if (dir == "D")
    {
        /*
        val = maze.getParticularMazeLocation(xLocation, yLocation+1);
        cout << val;

        if (val == 0)
        {
            return 0;
        }
        */

         yLocation--;
         return yLocation;
    }

    else if (dir == "L")
    {
        /*
        val = maze.getParticularMazeLocation(xLocation-1, yLocation);
        cout << val;

        if (val == 0)
        {
            return 0;
        }
        */


         xLocation--;
         return xLocation;
    }

    else if (dir == "R")
    {
        /*
        val = maze.getParticularMazeLocation(xLocation+1, yLocation);
        cout << val;

        if (val == 0)
        {
            return 0;
        }
        */

         xLocation++;
         return xLocation;

    }

    return 0;
}

