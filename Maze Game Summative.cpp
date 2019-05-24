#include <conio.h>
#include <iostream>
#include "Maze.h"
#include "Being.h"
#include "Monster.h"
#include "Player.h"
//#include "Link.h"
//#include "Stack.h"
using namespace std;



#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
using namespace std;


int main()
{
    // Monster Creation
    Maze maze;
    Player player;
    int location;
    int _move;
    Monster monster("Monstah", 100, 100);
    monster.displayBeing();
    //

    maze.setSpawn(1,1);
    maze.setExit(13,13);

    //========================================

    // Stack functions

    //Stack stak(NULL,NULL,0);
   // stak.push("L");
   // stak.push("D");
   // stak.push("U");
    //stak.push("R");

    //stak.displayStack();
/*
    system("PAUSE");
    system("CLS");
    stak.pop();
    //stak.displayStack();
    system("PAUSE");
    system("CLS");
    cout << "\n";
    stak.reloadStack();
    stak.peek("R");
    //stak.displayStack();
    system("PAUSE");
    system("CLS");
*/

    maze.displayMaze();

    player.movePlayer();

    //===========================================

    // User Solver



/*
void initStak(Stack*);
void displayStack();
void pop(Stack*);
void push(Stack* , string);
void peek(Stack*, string);
void reloadStack(Stack*);

Link* _top =  NULL;


void initStak(Stack* stak)
{
   stak->top = NULL;
}

void displayStack(Stack* stak)
{
    Link* temp = new Link;
    temp = _top;
    cout << "Stack contents: " << endl;
    if (temp == NULL)
    {
        cout << "The stack is empty";
    }
    else
    {
        cout << "\n";
        while (temp != NULL)
        {

        cout << temp->contents << endl;
        temp = temp->next;
        }
        return;
    }


}
void push(Stack* stak, string direction)
{
    ++stak->size;

    Link* newlink = new Link;
    newlink->contents = direction;

    if (stak->size == 1)
    {
        stak->base = newlink;
        newlink->next = _top;
        _top = newlink;
    }
    else
    {
        newlink->next = _top;
        _top = newlink;
    }

    return;
}

void pop(Stack* stak)
{
   if (_top == NULL)
   {
       cout << "Stack is empty" << endl;
       return;
   }
   else
   {
       --stak->size;
       cout << _top->contents << " was removed" << endl;
       _top = _top->next;
       return;
   }

}

void peek(Stack* stak, string _contents)
{
    Link* temp = new Link;
    temp = _top;
    while(temp != NULL)
    {
        if (temp->contents == _contents)
        {
            cout << _contents << " has been found." << endl;
            return;
        }
        temp = temp->next;
    }

}

void reloadStack(Stack* stak)
{
    push(stak, "L");
    push(stak, "D");
    push(stak, "U");
    push(stak, "R");
}
*/
}

