#include "Stack.h"
#include <iostream>

Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    //dtor
}

void Stack::setTop(Link* _top)
{
    _top = top;
    return;
}

void Stack::setBase(Link* _base)
{
    _base = base;
    return;
}

void Stack::setSize(int _size)
{
    _size = size;
    return;
}

Link*  Stack::getTop()
{
    return top;
}

Link* Stack::getBase()
{
    return base;
}

int Stack::getSize()
{
    return size;
}

void Stack::displayStack()
{
    Link* temp = new Link;
    temp = top;

    cout << "Stack contents: " << endl;

    if (temp == NULL)
    {
        cout << "The stack is empty";
        return;
    }
    else
    {
        cout << "\n";
        while (temp->getNext() != NULL)
        {
            cout << temp->getContents() << endl;
            temp = temp->getNext();
        }
        return;
    }


}

void Stack::push(string direction)
{

    size+1;

    Link* newlink = new Link;
    newlink->setContents(direction);

    if (size == 1)
    {
        base = newlink;
        newlink->setNext(top);
        top = newlink;
    }
    else
    {
        newlink->setNext(top);
        top = newlink;
    }

    return;
}

Link* Stack::pop()
{
   if (top == NULL)
   {
       cout << "Stack is empty" << endl;
       return NULL;
   }
   else
   {
       size--;
       Link* temp = new Link;
       Link* oldTop = new Link;

       temp = top;
       oldTop = temp;
       top = temp->getNext();
       return oldTop;
   }

}

string Stack::peek(string _contents)
{
    Link* temp = new Link;
    temp = top;
    while(temp != NULL)
    {
        if (temp->getContents() == _contents)
        {
            cout << _contents << " has been found." << endl;
            return _contents;
        }

        temp = temp->getNext();
    }

}

/*  Push all directions to try onto a stack
    After each successful move, reload the stack with every move other than the move which would represent backtracking
    BUT we should push the backtracking move onto the stack first  */


void Stack::reloadStack(string dir, string dir2, string dir3, string dir4)
{
    push(dir);
    push(dir2);
    push(dir3);
    push(dir4);
}
