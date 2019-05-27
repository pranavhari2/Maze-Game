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


int main()
{
    Maze maze;
    Player player("Pranav", 100, 100);
    Monster monster("Monstah", 100, 100);

    maze.setLocation(1,1);
    maze.setExit(13,13);

    player.setxLocation(5);
    player.setyLocation(5);

    char key;
    int asciival;

    cout << "Press a key....  ";

    while(1)
    {
        key = getch();
        asciival = key;

        if (asciival == 119)
        {
            maze[]
        }

        else if (asciival == 100)
        {

        }

        else if (asciival == 115)
        {

        }

        else if (asciival == 97)
        {

        }

        cout << asciival;


    }




    //maze.displayMaze();




    //========================================


    //===========================================

    // User Solver




}
