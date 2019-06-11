#include <iostream>
#include "Player.h"
#include "Being.h"
#include "Stack.h"


Player::Player(string _name, int _health, int _strength):Being::Being( _name, _health, _strength)
{
    xLocation = 1;
    yLocation = 1;
}

Player::~Player()
{
    //dtor
}

void AutoMove(int right, int left, int up, int down)
{

}


