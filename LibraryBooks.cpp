#include "LibraryBooks.h"

LibraryBooks::LibraryBooks()
{
}

LibraryBooks::~LibraryBooks()
{
}

void LibraryBooks::setAuthor(string author){ this->author = author; }
string LibraryBooks::getAuthor(){ return this->author; }