#ifndef MONSTER_H
#define MONSTER_H
#include "Being.h"


class Monster : public Being
{
    public:
        Monster(string, int, int);
        virtual ~Monster();

    protected:

    private:
};



#endif // MONSTER_H
