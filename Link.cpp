#include "Link.h"

Link::Link()
{
    //ctor
}

Link::~Link()
{
    //dtor
}

void Link::setNext(Link* _next)
{
    next = _next;
    return;
}

void Link::setPrev(Link* _prev)
{
    prev = _prev;
    return;
}

void Link::setContents(string _contents)
{
    contents = _contents;
    return;
}

Link*  Link::getNext()
{
    return next;
}

Link* Link::getPrev()
{
    return prev;
}

string Link::getContents()
{
    return contents;
}
