#pragma once
#include "LibraryBase.h"

class LibraryNode
{
private:
    
public:
    LibraryBase* data;
    LibraryNode* next;

    LibraryNode(LibraryBase* data)
    {
        this->data = data;
        this->next = nullptr;
    }
    ~LibraryNode(){}
};
