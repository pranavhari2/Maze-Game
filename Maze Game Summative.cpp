#include <conio.h>
#include <iostream>
#include <windows.h>
#include "Maze.h"
#include "Being.h"
#include "Monster.h"
#include "Player.h"
#include "Link.h"
#include "Stack.h"
using namespace std;

void AutoSolver(Maze, Player, Stack);


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

    stak.reloadStack(dir,)

    cout << "DIRECTION: " << dir << endl;

    return;
}



int main()
{
    Maze maze;
    Stack stak;
    Player player("Pranav", 100, 100);
    Monster monster("Monstah", 100, 100);


    maze.setLocation(1,1);
    maze.setExit(13,13);

    AutoSolver(maze,player,stak)

    maze.displayMaze();




    //========================================


    //===========================================

    // User Solver


}
