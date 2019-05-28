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

void Player::movePlayer(string dir)
{
    int val;

    if (dir == "up")
    {
        val = maze->getParticularMazeLocation(xLocation, yLocation-1);
        cout << val;

        if (val == 0)
        {
            return;
        }

        maze->maze[xLocation][yLocation] = blnk;
        yLocation++;
        maze->maze[xLocation][yLocation] = 'P';
    }

    else if (dir == "down")
    {
        val = maze->getParticularMazeLocation(xLocation, yLocation+1);
        cout << val;

        if (val == 0)
        {
            return;
        }

        maze->maze[xLocation][yLocation] = blnk;
        yLocation--;
        maze->maze[xLocation][yLocation] = 'P';
    }

    else if (dir == "left")
    {
        val = maze->getParticularMazeLocation(xLocation-1, yLocation);
        cout << val;

        if (val == 0)
        {
            return;
        }

        maze->maze[xLocation][yLocation] = blnk;
        xLocation--;
        maze->maze[xLocation][yLocation] = 'P';
    }

    else
    {
        val = maze->getParticularMazeLocation(xLocation+1, yLocation);
        cout << val;

        if (val == 0)
        {
            return;
        }

        maze->maze[xLocation][yLocation] = blnk;
        xLocation--;
        maze->maze[xLocation][yLocation] = 'P';

    }

    return;
}
