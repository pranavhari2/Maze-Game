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

void AutoSolver(Maze maze, Player player, Stack stak)
{
    Link* temp = stak.pop();
    string dir = temp->getContents();

    cout << "DIRECTION: " << dir << endl;

    return;
}



int main()
{
    Maze maze;
    Stack stak;
    Player player("Pranav", 100, 100);
    Monster monster("Monstah", 100, 100);

    maze.setSpawn(1,1);
    maze.setExit(13,13);

    player.setxLocation(4);
    player.setyLocation(4);



      player.movePlayer(maze,"R");

    //stak.reloadStack();

    //AutoSolver(maze,player,stak);


    //AutoSolver(maze);
    Sleep(1000);

    /*

    char key;
    int asciival;

    cout << "Press a key....  ";

    while(1)
    {
        key = getch();
        asciival = key;

        maze.displayMaze();

        if (asciival == 119)
        {
            player.movePlayer("up");
        }

        else if (asciival == 100)
        {
            player.movePlayer("down");
        }

        else if (asciival == 115)
        {
            player.movePlayer("left");
        }

        else if (asciival == 97)
        {
            player.movePlayer("right");
        }

        maze.displayMaze();

    }

    */

    maze.displayMaze();




    //========================================


    //===========================================

    // User Solver


}
