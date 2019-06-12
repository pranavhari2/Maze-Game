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

void GameMenu();
void ChestOpen();
void AutoSolver(Maze*, Player*, Stack*);
void UserSolver(Maze*, Player* , int);

void ChestOpen()
{
    system("CLS");

     cout << R"(
*******************************************************************************
          |                   |                  |                     |
 _________|______________________________|_____________________|_______________
|                   |                       |
|___________________|________________|___________________|___________________
          |                                  |
 _________|_______________________________________|_____________|_____________|
|                   |    __.--='\"'`"=._   |
|___________________|_._"  ,. .. ` `` ,  `"-.__________________________|_______
          |           |o`"=._` . ' .'' .". ,  "-._              |
 _________|___________| ;`-.o`"=._; ." ` '`. \-`- . "-._______________|________
|                   | |o;    `"-.o`"=._``   `    ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.'_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/______/_
*******************************************************************************
    )" << endl;

    cout << "SWORD ACQUIRED" << endl;
    Sleep(200);
    system("CLS");


        cout << R"(
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .. ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` . ' .'' .". ,  "-._"-._; ;               |
 _________|___________| ;`-.o`"=._; ." ` '`. \-`- . "-._ /_______________|_____
|                   | |o;    `"-.o`"=._``   `    ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.'_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/______/_
*******************************************************************************
    )" << endl;



    Sleep(500);
    system("CLS");
}


void GameMenu()
{
    system("CLS");

    cout << " ___     ___      ___     _____     _____          ___ ___   ______   ___  ___    _____    " << endl;
    cout << " |  \\  /    |    /   \\        /     |             |  |/  |    |  |    |   \\ | |   |     |   " << endl;
    cout << " |   \\/     |   /  _  \\      /      |____         |     /     |  |    |    \\| |   |     ___ " << endl;
    cout << " | |\\    /| |  /  | |  \\    /       |             |  _   \\    |  |    |   _   |   |     | | " << endl;
    cout << " |_| \\__/ |_| /_________\\  /_____   |_____        |_| |___\\  _|__|_   |__| |__|   |_______| " << endl;


    Sleep(500);

    cout << endl;
    cout << endl;
    cout << "Loading Game";
    cout << ".";
    Sleep(400);
    cout << ".";
    Sleep(400);
    cout << ".";
    Sleep(400);
    cout << ".";
    system("CLS");
}

void Combat()
{
    cout << "FIGHT THE MONSTER AND KILL IT" << endl;
}

/*  Push all directions to try onto a stack
    After each successful move, reload the stack with every move other than the move which would represent backtracking
    BUT we should push the backtracking move onto the stack first  */

void AutoSolver(Maze* maze, Player* player, Stack* stak)
{
    int right = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()+1);
    int left = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()-1);
    int down = maze->getParticularMazeLocation(player->getyLocation()+1, player->getxLocation());
    int up  = maze->getParticularMazeLocation(player->getyLocation()-1, player->getxLocation());

    if (stak->getTop()->getContents() == "R")    // Checks for top of stack (movement direction)
    {
        if (right == 0)    // Checks for valid move
        {
            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation()+1, player->getyLocation());

            // Push backtracking move onto stack first to avoid looping
            // Pushing directions in order similar to when first initialized
            stak->push("L");
            stak->push("U");
            stak->push("D");
            stak->push("R");
        }

        else
        {
            stak->pop();
        }

        return;


    }

    else if (stak->getTop()->getContents() == "L")
    {
        if (left == 0)
        {
            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation()-1, player->getyLocation());
            stak->push("R");
            stak->push("L");
            stak->push("U");
            stak->push("D");
        }

        else
        {
            stak->pop();
        }

        return;
    }

    else if (stak->getTop()->getContents()  == "D")
    {
        if (down == 0)
        {
            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()+1);
            stak->push("U");
            stak->push("D");
            stak->push("R");
            stak->push("L");
        }

        else
        {
            stak->pop();
        }

        return;
    }


    else if (stak->getTop()->getContents()  == "U")
    {
        if (up == 0)
        {
            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()-1);
            stak->push("D");
            stak->push("R");
            stak->push("L");
            stak->push("U");
        }

        else
        {
            stak->pop();
        }

        return;
    }
}


//=====================================================================

void UserSolver(Maze* maze, Player* player, int asciival)
{
        // Move Left
        if (asciival == 97)
        {
            int val = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()-1);

            // Grab Sword
            if (val == 1)
            {
                ChestOpen();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            // Grab Key
            else if (val == 2)
            {
                player->Setinventory("Key");
            }

            // Combat
            else if (val == 3 )
            {
                return;
            }

            else if (val == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation()-1, player->getyLocation());
        }

        // Move Right
        else if (asciival == 100)
        {
            int val = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()+1);

            if (val == 1)
            {
                ChestOpen();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            else if (val == 2)
            {
                player->Setinventory("Key");
            }

            else if (val == 3)
            {
                return;
            }

            else if (val == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation()+1, player->getyLocation());
        }

        else if (asciival == 119)
        {
            // Move Up
            int val = maze->getParticularMazeLocation(player->getyLocation()-1, player->getxLocation());

            if (val == 1)
            {
                ChestOpen();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            else if (val == 2)
            {
                player->Setinventory("Key");
            }

            else if (val == 3 )
            {
                return;
            }

            else if (val == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()-1);
        }

        // Move Down
        else if (asciival == 115)
        {
           int val = maze->getParticularMazeLocation(player->getyLocation()+1, player->getxLocation());

            if (val == 1)
            {
                ChestOpen();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            else if (val == 2)
            {
                player->Setinventory("Key");
            }

            else if (val == 3 )
            {
                return;
            }

            else if (val == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()+1);
        }
        return;
}

//=========================================================================================================

int main()
{
    Maze* maze = new Maze;
    Stack* stak = new Stack;
    char key;
    int asciival;
    srand(time(NULL));

    GameMenu();

    Player player("Pranav", 100, 100);
    Monster monster("Monster1", 100, 50);
    Monster monster2("Monster2", 100, 30);
    Monster monster3("Monster3", 100, 70);

    Player* myPlayer = &player;
    Monster* mon = &monster;
    Monster* mon2 = &monster2;
    Monster* mon3 = &monster3;

    maze->setPlayerLocation(myPlayer, 1,1);                // Sets the player to the location in the maze

    player.setxLocation(1);
    player.setyLocation(1);

    while(myPlayer->getxLocation() != 16)
    {
        maze->displayMaze();
        key = getch();
        asciival = key;
        UserSolver(maze, myPlayer, asciival);
        system("CLS");
    }


    stak->push("L");
    stak->push("R");
    stak->push("D");
    stak->push("U");

    /*while(myPlayer->getxLocation() != 16)
    {
        maze->displayMaze();
        AutoSolver(maze, myPlayer, stak);
        Sleep(50);
        system("CLS");
    }
    */






    //========================================

    //==========================================

    // User Solver

}
