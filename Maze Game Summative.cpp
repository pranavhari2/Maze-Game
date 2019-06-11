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
void AutoSolver(Maze, Player, Stack*);
void UserSolver(Maze*, Player& , int);


void GameMenu()
{
    system("CLS");

    cout << " ___    ___     ___     _____     _____         ___ ___    ______    ___  ___    _____" << endl;
    cout << "|   \  /   |   /   \        /     |             |  |/  |    |  |    |   \ | |   |     |" << endl;
    cout << "|    \/    |  /  _  \      /      |____         |     /     |  |    |    \| |   |     ___" << endl;
    cout << "| |\    /| | /  | |  \    /       |             |  _   \    |  |    |   _   |   |     | |" << endl;
    cout << "|_| \__/ |_|/_________\  /_____   |_____        |_| |___\  _|__|_   |__| |__|   |_______|" << endl;

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
    system("CLS");
    cout << "FIGHT AND KILL THE MONSTER" << endl;




}

/*  Push all directions to try onto a stack
    After each successful move, reload the stack with every move other than the move which would represent backtracking
    BUT we should push the backtracking move onto the stack first  */

/*void AutoSolver(Maze* maze, Player &player, Stack* stak)
{
    int right = maze.getParticularMazeLocation(player.getyLocation(), player.getxLocation()+1);           // Checks every location near the player one by one
    int left = maze.getParticularMazeLocation(player.getyLocation(), player.getxLocation()-1);
    int down = maze.getParticularMazeLocation(player.getyLocation()+1, player.getxLocation());
    int up  = maze.getParticularMazeLocation(player.getyLocation()-1, player.getxLocation());

    stak.reloadStack("L","D","U","R");
    Link* move = stak.pop();

    player.AutoMove(right, left, up, down);

}
*/


int main()
{
    Maze* maze = new Maze;
    Stack stak;
    char key;
    int asciival;
    srand(time(NULL));

    GameMenu();


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

//        UserSolver(maze, player, asciival);

        system("CLS");
    }

    //========================================

    //==========================================

    // User Solver

}
