#include "LibraryBase.h"

LibraryBase::LibraryBase(){}   
LibraryBase::LibraryBase(int id, string name)
{
    this->setId(id);
    this->setName(name);
}   

virtual LibraryBase::~LibraryBase(){}

void LibraryBase::setId(int id) { this->id = id; }
int LibraryBase::getId(){ return this->id; }

void LibraryBase::setName(string name){ this->name = name; }
string LibraryBase::getName(){ return this->name; }