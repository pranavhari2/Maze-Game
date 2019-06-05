#ifndef MAZE_H
#define MAZE_H
#include <iostream>
#include <string>
using namespace std;

char const sdwl = 196;
char const wall = 179;
char const blnk = ' ';
char const crn1 = 218;
char const crn2 = 191;
char const crn3 = 192;
char const crn4 = 217;
char const midd = 194;
char const sdmd = 195;
char const whit = 210;
char const whit2 = 219;




class Maze
{

    public:
        char maze[15][15] =

    {       {crn1, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, crn2}, //1//
            {blnk, blnk, blnk, blnk, blnk, blnk, sdwl, crn2, blnk, blnk, blnk, blnk, blnk, blnk, wall}, //2//
            {wall, blnk, sdwl, midd, blnk, blnk, blnk, wall, blnk, wall, blnk, wall, sdwl, blnk, wall}, //3//
            {wall, blnk, blnk, wall, blnk, crn3, blnk, blnk, blnk, wall, blnk, wall, blnk, blnk, wall}, //4//
            {wall, blnk, blnk, wall, blnk, blnk, blnk, blnk, blnk, wall, blnk, wall, blnk, blnk, wall}, //5//
            {wall, blnk, crn1, blnk, blnk, sdwl, crn2, blnk, blnk, blnk, blnk, wall, blnk, blnk, wall}, //6//
            {wall, blnk, wall, blnk, blnk, blnk, sdmd, blnk, sdwl, blnk, blnk, wall, blnk, blnk, wall}, //7//
            {wall, blnk, crn3, sdwl, sdwl, blnk, blnk, sdwl, sdwl, crn2, blnk, wall, blnk, blnk, wall}, //8
            {wall, blnk, blnk, sdwl, sdwl, sdwl, blnk, blnk, blnk, blnk, blnk, blnk, blnk, blnk, wall}, //9
            {wall, blnk, blnk, blnk, blnk, blnk, blnk, wall, blnk, wall, blnk, crn1, sdwl, sdwl, wall}, //10
            {wall, blnk, wall, blnk, wall, blnk, blnk, wall, blnk, wall, blnk, wall, blnk, blnk, wall}, //11
            {wall, sdwl, crn4, blnk, wall, blnk, blnk, crn3, sdwl, crn4, blnk, wall, blnk, blnk, wall},  //12
            {wall, sdwl, sdwl, sdwl, crn4, blnk, blnk, blnk, blnk, blnk, blnk, wall, blnk, blnk, wall},  //13
            {wall, sdwl, sdwl, blnk, blnk, blnk, crn1, sdwl, sdwl, sdwl, blnk, blnk, blnk, blnk, wall},  //14
            {crn3, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, sdwl, crn4},  //15
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
