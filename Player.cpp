#include <iostream>
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

void AutoMove(Maze* maze, Player* player, Stack* stak, int right, int left, int up, int down)
{
    stak->reloadStack("L","D","U","R");

    if (stak->getTop()->getContents() == "R")
    {
        if (right == 0)
        {
            maze->setPlayerLocation(player, player->getxLocation()+1, player->getyLocation());
            stak->reloadStack("L", "D", "U", "R");
        }

        else
        {
            stak->pop();
            return;
        }
    }

    else if (stak->getTop()->getContents() == "L")
    {
        if (left == 0)
        {
            maze->setPlayerLocation(player, player->getxLocation()-1, player->getyLocation());
            stak->reloadStack("R" ,"L", "D", "U");
        }

        else
        {
            stak->pop();
        }
    }

    else if (stak->getTop()->getContents()  == "D")
    {
        if (right == 0)
        {
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()-1);
            stak->reloadStack("U", "L", "D", "R");
        }

        else
        {
            //stak->pop();
            return;
        }
    }


    else if (stak->getTop()->getContents()  == "U")
    {
        if (left == 0)
        {
            maze->setPlayerLocation(player, player->getxLocation(), player->getyLocation()-1);
            stak->reloadStack("D" ,"U", "R", "L");
        }

        else
        {
            stak->pop();
        }
    }

    return;
}
