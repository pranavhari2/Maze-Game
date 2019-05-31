#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Link.h"
using namespace std;


class Stack
{
    public:
        Stack();
        virtual ~Stack();
        void displayStack();
        Link* pop();
        void push(string);
        void peek(string);
        void reloadStack();
        Link* getTop();
        Link* getBase();
        int getSize();
        void setTop(Link*);
        void setBase(Link*);
        void setSize(int);


    protected:

    private:
        Link* top;
        Link* base;
        int size;
};

#endif // STACK_H
