#include "Being.h"
#include "Maze.h"
#include <iostream>
using namespace std;

Being::~Being()
{
    //dtor
}

Being::Being(string _name, int _health, int _strength)
{
    name = _name;
    health = _health;
    strength = _strength;
}

string Being::Getname()
{
    return name;
}
void Being::Setname(string _name)
{
    name = _name;
    return;
}
int Being::Gethealth()
{
    return health;
}
void Being::Sethealth(int _health)
{
    health = _health;
    return;
}
string Being::Getinventory()
{
    for (int i; i < 10; i++)
    {
        cout << "Items: " << inventory[i] << endl;
    }
}

int Being::getxLocation()
{
    return xLocation;
}

int Being::getyLocation()
{
    return yLocation;
}

void Being::setxLocation(int _xLocation)
{
    xLocation = _xLocation;
    return;
}

void Being::setyLocation(int _yLocation)
{
    yLocation = _yLocation;
    return;
}

//void Being::Setinventory(string _inventory)
//{

//}

int Being::Getstrength()
{
    return strength;
}

void Being::Setstrength(int _strength)
{
    strength = _strength;
}

void Being::displayBeing()
{
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    //cout << "Items in Inventory: " <<  endl;
    cout << "Strength: " << strength << endl;
}

