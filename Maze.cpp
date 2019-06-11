#include "Maze.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

Maze::Maze()
{
    //ctor
}

Maze::~Maze()
{
    //dtor
}

/*Maze::Maze(int _width, int _height, int _spawnX, int _spawnY, int _exitX, int _exitY)
{
    maxWidth = _width;
    maxHeight = _height;
    spawnX = _spawnX;
    spawnY =  _spawnY;
    exitX = _exitX;
    exitY = _exitY;
}
*/

void Maze::displayMaze()
{
    cout <<  "                                      " << endl;
    for (int i = 0; i<17; i++)
        {
            cout <<  "                                      ";
            for (int j = 0; j<17; j++)
            {

                cout << maze[i][j] << "";

            }
        cout << endl;

        }

    return;

}

int Maze::getParticularMazeLocation(int yval, int xval)
{
    if (maze[yval][xval] == blnk )
    {
        return 0;
    }

    else if (maze[yval][xval] == 'C')
    {
        cout << "CHEST" << endl;
        return 1;
    }

    else if (maze[yval][xval] == 'K')
    {
        cout << "KEY" << endl;
        return 2;
    }

    else if (maze[yval][xval] == 'M')
    {
        cout << "MONSTER." << endl;
        return 3;
    }

    else
    {
        return 4;
    }
}

int Maze::getSpawnX()
{
    return spawnX;
}
int Maze::getSpawnY()
{
    return spawnY;
}
int Maze::getExitX()
{
    return exitX;
}
int Maze::getExitY()
{
    return exitY;
}

void Maze::setPlayerLocation(Player* player, int _x, int _y)
{
    player->setxLocation(_x);
    player->setyLocation(_y);
    maze[_y][_x] = 'P';
    return;
}

void Maze::setMonsterLocation(Monster* monster, int _x, int _y)   // Sets Monster's Location on maze
{
    monster->setxLocation(_x);
    monster->setyLocation(_y);
    maze[_y][_x] = 'M';
    return;
}

void Maze::setExit(int _exitX, int _exitY)
{
    maze[_exitX][_exitY] = 'E';
    return;
}

//void DetectCollision(Player &player, Monster &monster)
//{
    //if (
