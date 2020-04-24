#include "LibraryBooks.h"

LibraryBooks::LibraryBooks()
{
    this->setId(0);
    this->setName("");
    this->setAuthor("");
}
LibraryBooks::LibraryBooks(int id, string name, string author)
{
    this->setId(id);
    this->setName(name);
    this->setAuthor(author);
}

LibraryBooks::~LibraryBooks()
{
}

void LibraryBooks::print()
{
    cout << "Id: " << this->getId() << ", Name: " << this->getName() << ", Author: " << this->getAuthor() << endl;
}

void LibraryBooks::setAuthor(string author){ this->author = author; }
string LibraryBooks::getAuthor(){ return this->author; }