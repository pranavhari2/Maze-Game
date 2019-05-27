#ifndef LINK_H
#define LINK_H
#include <iostream>
using namespace std;


class Link
{
    public:
        Link();
        virtual ~Link();
        void setNext(Link*);
        void setPrev(Link*);
        void setContents(string);
        Link*  getNext();
        Link* getPrev();
        string getContents();


    protected:

    private:
        Link* next;
        Link* prev;
        string contents;
};

#endif // LINK_H
