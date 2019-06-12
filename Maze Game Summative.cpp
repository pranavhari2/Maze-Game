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
void AutoSolver(Maze*, Player*, Monster*, Monster*, Monster*, Stack*);
void UserSolver(Maze*, Player* , int);




void GameMenu()
{
    system("CLS");

    cout << " ___     ___      ___     _____     _____          ___ ___   ______   ___  ___    _____    " << endl;
    cout << " |  \\  /    |    /   \\        /     |             |  |/  |    |  |    |   \\ | |   |    |   " << endl;
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

/*  Push all directions to try onto a stack
    After each successful move, reload the stack with every move other than the move which would represent backtracking
    BUT we should push the backtracking move onto the stack first  */

void AutoSolver(Maze* maze, Player* player, Monster* mon1, Monster* mon2, Monster* mon3, Stack* stak)
{
    int right = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()+1);
    int left = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()-1);
    int down = maze->getParticularMazeLocation(player->getyLocation()+1, player->getxLocation());
    int up  = maze->getParticularMazeLocation(player->getyLocation()-1, player->getxLocation());

    player->Action(maze, player, stak, right, left, down, up);
    mon1->Move(maze);
    mon2->Move(maze);
    mon3->Move(maze);

}


//=====================================================================

void UserSolver(Maze* maze, Player* player, int asciival)
{
        // Move Left
        if (asciival == 97)
        {
            int move = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()-1);

            // Grab Sword
            if (move == 1)
            {
                player->OpenChest();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            // Grab Key
            else if (move == 2)
            {
                player->Setinventory("Key");
            }

            // Combat
            else if (move == 3 )
            {
                return;
            }

            else if (move == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation()-1, player->getyLocation());
        }

        // Move Right
        else if (asciival == 100)
        {
            int move = maze->getParticularMazeLocation(player->getyLocation(), player->getxLocation()+1);

            if (move == 1)
            {
                player->OpenChest();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            else if (move == 2)
            {
                player->Setinventory("Key");
            }

            else if (move == 3)
            {
                return;
            }

            else if (move == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation()+1, player->getyLocation());
        }

        else if (asciival == 119)
        {
            // Move Up
            int move = maze->getParticularMazeLocation(player->getyLocation()-1, player->getxLocation());

            if (move == 1)
            {
                player->OpenChest();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            else if (move == 2)
            {
                player->Setinventory("Key");
            }

            else if (move == 3 )
            {
                return;
            }

            else if (move == 4)
            {
                return;
            }

            maze->maze[player->getyLocation()][player->getxLocation()] = blnk;
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()-1);
        }

        // Move Down
        else if (asciival == 115)
        {
           int move = maze->getParticularMazeLocation(player->getyLocation()+1, player->getxLocation());

            if (move == 1)
            {
                player->OpenChest();
                player->Setinventory("Sword");
                player->Getinventory();
            }

            else if (move == 2)
            {
                player->Setinventory("Key");
            }

            else if (move == 3 )
            {
                return;
            }

            else if (move == 4)
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

    Player player("Pranav", 100, 100);                   // Create Monsters and Player
    Monster monster("Monster1", 100, 70);
    Monster monster2("Monster2", 100, 70);
    Monster monster3("BOSS", 100, 100);


    Player* myPlayer = &player;
    Monster* mon1 = &monster;
    Monster* mon2 = &monster2;
    Monster* mon3 = &monster3;

    maze->setPlayerLocation(myPlayer, 1,1);                // Sets the player's starting position
    maze->setMonsterLocation(mon1, 12, 15);
    maze->setMonsterLocation(mon2,  6,2);
    maze->setMonsterLocation(mon3, 2,14);

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


    stak->push("U");
    stak->push("L");
    stak->push("R");
    stak->push("D");


    while(myPlayer->getxLocation() != 16)
    {
        maze->displayMaze();
        AutoSolver(maze, myPlayer, mon1, mon2, mon3, stak);
        Sleep(50);
        system("CLS");
    }

    //========================================

    //==========================================

    // User Solver

}
