#ifndef PLAYER_H
#define PLAYER_H
#include "Being.h"

using namespace std;


class Player : public Being
{
    public:
        Player(string, int, int);
        virtual ~Player();
        void AutoMove(int,int,int,int);
    protected:

    private:
};


#endif // PLAYER_H
