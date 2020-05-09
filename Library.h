#pragma once
#include "LibraryBase.h"
#include "LibraryNode.h"

class Library
{
private:
    LibraryNode *head;
public:
    Library();
    ~Library();

    void add(LibraryBase *libraryItem);
    LibraryBase *retrieve(int id);
    void remove(int id);
    void update(int id, LibraryBase *newData);
    int libraryCastOrderIndex(LibraryBase *libraryItem);
    void printAll();

};

