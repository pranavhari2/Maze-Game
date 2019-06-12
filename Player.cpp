#include <iostream>
#include <windows.h>
#include "Being.h"
#include "Maze.h"
#include "Player.h"
#include "Stack.h"

Player::Player(string _name, int _health, int _strength):Being::Being( _name, _health, _strength)
{

}

Player::~Player()
{
    //dtor
}

void Player::checkKey()
{
    for (int i = 0; i < 10; i++)
    {
        if (inventory[i] == "Key")
        {
            return;
        }
    }

    return;
}

void Player::OpenChest()
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
|                   | |o;    `"-.o`"=._``   `    _,;.--o;   |
|___________________|_| ;     (#) `-.o `"=.'_.--"__.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/______/_
*******************************************************************************
    )" << endl;

    cout << "SWORD ACQUIRED" << endl;
    Sleep(100);
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


void Player::Combat()
{
    cout << "FIGHT THE MONSTER AND KILL IT" << endl;


}




void Player::Action(Maze* maze, Player* player, Stack* stak, int right, int left, int down, int up)
{
    if (stak->getTop()->getContents() == "R")    // Checks for top of stack (movement direction)
    {
        if (right == 0)    // Checks for valid move
        {
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation+1, yLocation);
        }

        else if (right == 1)
        {
            Setinventory("SWORD");
            OpenChest();
        }

        // Combat
        else if (right == 2)
        {
            Setinventory("KEY");
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation+1, yLocation);
        }

        else if (right == 3)
        {
            Combat();
        }

        else
        {
            stak->pop();
            return;
        }

        stak->push("L");
        stak->push("D");
        stak->push("R");
        stak->push("U");

        return;
    }

    else if (stak->getTop()->getContents() == "L")
    {
        if (left == 0)
        {
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation-1, yLocation);
        }

        else if (left == 1)
        {
            Setinventory("SWORD");
            OpenChest();
        }

        else if (left == 2)
        {
            Setinventory("KEY");
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation-1, yLocation);
        }

        else if (left == 3)
        {
            Combat();
        }

        else
        {
            stak->pop();
            return;
        }

        stak->push("R");
        stak->push("U");
        stak->push("L");
        stak->push("D");

        return;
    }

    else if (stak->getTop()->getContents()  == "D")
    {
        if (down == 0)
        {
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation, yLocation+1);

        }

        else if (down == 1)
        {
            Setinventory("SWORD");
            OpenChest();
        }

        // Combat
        else if (down == 2)
        {
            Setinventory("KEY");
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation, yLocation+1);
        }

        else if (down == 3)
        {
            Combat();
        }

        else
        {
            stak->pop();
            return;
        }

        stak->push("U");
        stak->push("R");
        stak->push("D");
        stak->push("L");

        return;
    }

    else if (stak->getTop()->getContents()  == "U")
    {
        if (up == 0)
        {
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation, yLocation-1);
        }

        else if (up == 1)
        {
            Setinventory("SWORD");
            OpenChest();
        }
        // Combat
        else if (up == 2)
        {
            Setinventory("KEY");
            maze->maze[yLocation][xLocation] = blnk;
            maze->setPlayerLocation(player, xLocation, yLocation-1);
        }

        else if (up == 3)
        {
            Combat();
        }

        else
        {
            stak->pop();
            return;
        }

        stak->push("D");
        stak->push("R");
        stak->push("U");
        stak->push("L");

        return;
    }

}


void Player::UserAction()
{

}
