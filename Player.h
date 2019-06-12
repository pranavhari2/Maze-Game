#ifndef PLAYER_H
#define PLAYER_H
#include "Being.h"
#include "Stack.h"

using namespace std;

class Maze;

class Player : public Being
{
    public:
        Maze* maze;
        Player(string, int, int);
        virtual ~Player();
        void checkKey();
        void Action(Maze*, Player*, Stack*, int,int,int,int);
        void OpenChest();
        void Combat();
        void UserAction();

    protected:

    private:
};


#endif // PLAYER_H
