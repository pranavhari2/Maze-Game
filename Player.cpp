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

