#include "LibraryBase.h"

LibraryBase::LibraryBase()
{
}

LibraryBase::~LibraryBase()
{
}

void LibraryBase::setId(int id) { this->id = id; }
int LibraryBase::getId(){ return this->id; }

void LibraryBase::setName(string name){ this->name = name; }
string LibraryBase::getName(){ return this->name; }