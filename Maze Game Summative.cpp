#include <conio.h>
#include <iostream>
#include "Maze.h"
#include "Being.h"
#include "Monster.h"
#include "Player.h"
//#include "Link.h"
//#include "Stack.h"
using namespace std;



#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
using namespace std;


int main()
{
    // Monster Creation
    Maze maze;
    Being player("Pranav", 100, 100);
    int location;
    int _move;
    Monster monster("Monstah", 100, 100);
    //

    maze.setSpawn(1,1);
    maze.setExit(13,13);

    //========================================

    for (int i=0; i<14; i++)
    {
        for (int j = 0; j<14; j++)
        {
            maze.maze[j][i] = 'P';
            maze.displayMaze();
            maze.maze[j][i] = blnk;
        }
    }

    //===========================================

    // User Solver


dd

}

