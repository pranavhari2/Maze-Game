#include <conio.h>
#include <iostream>
#include <windows.h>
#include <ctime>
#include "Maze.h"
#include "Being.h"
#include "Monster.h"
#include "Player.h"
#include "Link.h"
#include "Stack.h"
using namespace std;

void AutoSolver(Maze, Player, Stack);
void UserSolver(Maze, Player& , int);
void Combat();



/*  Push all directions to try onto a stack
    After each successful move, reload the stack with every move other than the move which would represent backtracking
    BUT we should push the backtracking move onto the stack first  */

void AutoSolver(Maze maze, Player player, Stack stak)
{
    int right = maze.getParticularMazeLocation(player.getyLocation(), player.getxLocation()+1);
    int left = maze.getParticularMazeLocation(player.getyLocation(), player.getxLocation()-1);
    int down = maze.getParticularMazeLocation(player.getyLocation()+1, player.getxLocation());
    int up  = maze.getParticularMazeLocation(player.getyLocation()-1, player.getxLocation());

    stak.reloadStack("L","D","U","R");
    Link* move = stak.pop();

    if (right == 0)
    {
        player.setxLocation(player.getxLocation()+1);
        maze.maze[player.getyLocation(), player.getxLocation()];
    }

    string dir = move->getContents();

    cout << "DIRECTION: " << dir << endl;

    return;
}

void UserSolver(Maze* maze, Player &player, int asciival)
{
        // Move Left
        if (asciival == 97)
        {
            int val = maze->getParticularMazeLocation(player.getyLocation(), player.getxLocation()-1);

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation()-1, player.getyLocation());
            }

            else if (val == 1)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation()-1, player.getyLocation());
            }

            else if (val == 2)
            {


            }

            else if (val == 3)
            {
            }


        }

        // Move Right
        else if (asciival == 100)
        {
            int val = maze->getParticularMazeLocation(player.getyLocation(), player.getxLocation()+1);

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation()+1, player.getyLocation());
            }

            else if (val == 1)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation()+1, player.getyLocation());
            }

            else if (val == 2)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation()+1, player.getyLocation());
            }


        }

        else if (asciival == 119)
        {
            // Move Up
            int val = maze->getParticularMazeLocation(player.getyLocation()-1, player.getxLocation());

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation(), player.getyLocation()-1);
            }

            else if (val == 1)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation(), player.getyLocation()-1);
            }

            else if (val == 2)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation(), player.getyLocation()-1);
            }
        }

        // Move Down
        else if (asciival == 115)
        {
           int val = maze->getParticularMazeLocation(player.getyLocation()+1, player.getxLocation());

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation(), player.getyLocation()+1);
            }

            else if (val == 1)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation(), player.getyLocation()+1);
            }

            else if (val == 2)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                maze->setPlayerLocation(player, player.getxLocation(), player.getyLocation()+1);
            }
        }
        return;
}




int main()
{
    Maze* maze = new Maze;
    Stack stak;
    char key;
    int asciival;
    srand(time(NULL));


    Player player("Pranav", 100, 100);
    Monster monster("Monstah", 100, 100);

    maze->setPlayerLocation(player, 1,1);                // Sets the player to the location in the maze
    maze->setMonsterLocation(monster, 13,12);

    player.setxLocation(1);
    player.setyLocation(1);

    while(1)
    {
        maze->displayMaze();
        key = getch();
        asciival = key;

        UserSolver(maze, player, asciival);

        system("CLS");
    }

    //========================================

    //==========================================

    // User Solver

}
