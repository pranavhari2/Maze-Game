#include <iostream>
#include "Being.h"
#include "Maze.h"
#include "Player.h"

Player::Player(string _name, int _health, int _strength):Being::Being( _name, _health, _strength)
{

}

Player::~Player()
{
    //dtor
}

//void Player::grabKey()
//{

