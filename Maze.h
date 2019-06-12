#ifndef MAZE_H
#define MAZE_H
#include <iostream>
#include <string>
#include "Player.h"
#include "Monster.h"
using namespace std;

class Monster;

char const blnk = ' ';
char const crn1 = 218;
char const crn2 = 191;
char const crn3 = 192;
char const crn4 = 217;
char const midd = 194;
char const sdmd = 195;
char const whit = 220;
char const whit2 = 219;




class Maze
{

    public:
        Monster* monster;
        char maze[17][17] =
            //1      //2    //3  4    5      6      7    8     9     10    11    12    13    14    15    16    17
     {      {whit,  whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit}, //1    //
            {whit2, blnk, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, blnk, blnk, blnk, 'D', 'C', whit2, whit2}, //2//
            {whit2, blnk, blnk, blnk, whit2, blnk, blnk, blnk, blnk, blnk, blnk, whit2, whit2, whit2, blnk, whit2, whit2}, //3//
            {whit2, blnk, whit2, blnk, whit2, blnk, whit2, whit2, whit2, whit2, blnk, whit2, blnk, blnk, whit2, blnk, whit2}, //4//
            {whit2, blnk, whit2, blnk, blnk, blnk, whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, 'K', whit2}, //5//
            {whit2, blnk, whit2, whit2, blnk, whit2, blnk, blnk, whit, blnk, blnk, whit2, blnk, whit2, whit2, whit2, whit2}, //6//, //7//
            {whit2, blnk, blnk, blnk, blnk, blnk, whit2, blnk, whit2, whit2, 'C', whit2, blnk, blnk, blnk, blnk, whit2}, //8
            {whit2, whit2, blnk, blnk, whit2, whit2, whit2, blnk, blnk, whit2, whit2, whit2, whit2, whit2, blnk, blnk, whit2}, //9
            {whit2, blnk, blnk, blnk, blnk, blnk, whit2, blnk, blnk, blnk, blnk, blnk, whit2, whit2, blnk, blnk, whit2}, //10
            {whit2, blnk, whit2, blnk, whit2, blnk, whit2, whit2, whit2, whit2, blnk, whit2, blnk, whit2, blnk, blnk, whit2}, //11
            {whit2, blnk, whit2, blnk, whit2, blnk, blnk, blnk, blnk, blnk, blnk, 'K', blnk, blnk, whit2, blnk, whit2},  //12
            {whit2, whit2, whit2, blnk, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, blnk, whit2, whit2, blnk, whit2},  //13
            {whit2, blnk, blnk, blnk, blnk, whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2},  //14
            {whit2, blnk, whit2, blnk, blnk, whit2, blnk, whit2, whit2, blnk, whit2, whit2, whit2, whit2, whit2, whit2, whit2},
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, whit2, whit2, blnk, blnk, blnk, blnk, blnk, blnk, whit2, whit2},
            {whit2, whit2, whit2, whit2, whit2, blnk, whit2, whit2, whit2, blnk, blnk, whit2, whit2, blnk, blnk, blnk, blnk},
            {whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2, whit2},  //15
    };

        Maze();
        virtual ~Maze();
        void displayMaze();
        int getParticularMazeLocation(int ,int);
        int getSpawnX();
        int getExitX();
        int getSpawnY();
        int getExitY();
        void setPlayerLocation(Player*, int, int);
        void setMonsterLocation(Monster*, int, int);
        void setExit(int, int);




    protected:

    private:
        int maxWidth;
        int maxHeight;
        int spawnX;
        int spawnY;
        int exitX;
        int exitY;
};

#endif // MAZE_H
