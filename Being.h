#ifndef BEING_H
#define BEING_H
#include "Maze.h"
#include <iostream>
using namespace std;


class Being
{
    public:
        Being();
        virtual ~Being();
        Being(string, int, int);
        string Getname();
        void Setname(string _name);
        int Gethealth();
        void Sethealth(int _health);
        string Getinventory();
        void Setinventory();
        int Getstrength();
        void Setstrength(int _strength);
        void displayBeing();
        void setxLocation(int _xLocation);
        void setyLocation(int _yLocation);
        int getxLocation();
        int getyLocation();




    protected:
        string name;
        int health;
        string inventory[10];
        int strength;
        int xLocation;
        int yLocation;

    private:


};

#endif // BEING_H
