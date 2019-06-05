#ifndef MAZE_H
#define MAZE_H
#include <iostream>
#include <string>
using namespace std;

char const blnk = ' ';
char const crn1 = 218;
char const crn2 = 191;
char const crn3 = 192;
char const crn4 = 217;
char const midd = 194;
char const sdmd = 195;
char const whit = 220;
char const whit2 = 219;
char const whit3 = 223;




class Maze
{

    public:
        char maze[17][17] =

    {       {whit,  whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit, whit}, //1    //
            {whit2, blnk, whit, whit, whit, whit, whit, whit, whit, whit, blnk, blnk, blnk, blnk, blnk, whit2, whit2}, //2//
            {whit2, blnk, blnk, blnk, whit2, blnk, blnk, blnk, blnk, blnk, blnk, whit, whit, whit, blnk, whit2, whit2}, //3//
            {whit2, whit, whit, blnk, whit2, blnk, whit, whit, whit, whit, blnk, whit, blnk, blnk, blnk, blnk, whit2}, //4//
            {whit2, whit, whit, blnk, blnk, blnk, whit, blnk, blnk, blnk, blnk, whit, blnk, blnk, blnk, blnk, whit2}, //5//
            {whit2, whit3, whit, blnk, blnk, blnk, whit, blnk, blnk, blnk, blnk, whit, blnk, whit, whit, blnk, whit2}, //6//
            {whit2, whit, whit, whit, whit, blnk, whit, blnk, whit, blnk, blnk, whit, blnk, whit, whit, whit, whit2}, //7//
            {whit2, whit2, blnk, blnk, blnk, blnk, whit, blnk, whit, whit, blnk, whit, blnk, blnk, blnk, whit, whit2}, //8
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2}, //9
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2}, //10
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2}, //11
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2},  //12
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2},  //13
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2},  //14
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2},
            {whit2, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, whit2},
            {whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3, whit3},  //15
    };

        Maze();
        virtual ~Maze();
        void displayMaze();
        int getParticularMazeLocation(int ,int);
        int getSpawnX();
        int getExitX();
        int getSpawnY();
        int getExitY();
        void setPlayerLocation(int, int);
        void setMonsterLocation(int, int);
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
