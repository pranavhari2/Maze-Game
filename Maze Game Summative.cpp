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

    //sstak.reloadStack(dir,)

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
                player.setxLocation(player.getxLocation()-1);
                //maze.setPlayerLocation(player.getxLocation(), player.getyLocation());
                maze->maze[player.getyLocation()][player.getxLocation()] = 'P';
            }

            else
            {
                cout << "Invalid Move. " << endl;
            }
        }

        // Move Right
        else if (asciival == 100)
        {
            int val = maze->getParticularMazeLocation(player.getyLocation(), player.getxLocation()+1);

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                player.setxLocation(player.getxLocation()+1);
                maze->maze[player.getyLocation()][player.getxLocation()] = 'P';
            }

            else
            {
                cout << "Invalid Move. " << endl;
            }
        }

        else if (asciival == 119)
        {
            // Move Up
            int val = maze->getParticularMazeLocation(player.getyLocation()-1, player.getxLocation());

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                player.setyLocation(player.getyLocation()-1);
                maze->maze[player.getyLocation()][player.getxLocation()] = 'P';
            }

            else
            {
                cout << "Invalid Move. " << endl;
            }
        }

        // Move Down
        else if (asciival == 115)
        {
           int val = maze->getParticularMazeLocation(player.getyLocation()+1, player.getxLocation());

            if (val == 0)
            {
                maze->maze[player.getyLocation()][player.getxLocation()] = blnk;
                player.setyLocation(player.getyLocation()+1);
                maze->maze[player.getyLocation()][player.getxLocation()] = 'P';
            }

            else
            {
                cout << "Invalid Move. " << endl;
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

    maze->setPlayerLocation(1,1);                // Sets the player to the location in the maze
    maze->setExit(13,13);
   // maze->setMonsterLocation(4,4);

    player.setxLocation(1);
    player.setyLocation(1);

    while(1)
    {
        maze->displayMaze();
        key = getch();
        asciival = key;
        /*
        int val = maze->getParticularMazeLocation(monster.getyLocation()+rand()%14-4, monster.getxLocation()+rand()%14-4);
        if (val == 0)
        {
            maze->setMonsterLocation(monster.getxLocation(), monster.getyLocation());
        }
        */

        UserSolver(maze, player, asciival);

        system("CLS");


    }

    //========================================

    //==========================================

    // User Solver

}
