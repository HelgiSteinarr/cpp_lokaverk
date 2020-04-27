#include "LibraryBook.h"

LibraryBook::LibraryBook()
{
    this->setId(0);
    this->setName("");
    this->setAuthor("");
}
LibraryBook::LibraryBook(int id, string name, string author)
{
    this->setId(id);
    this->setName(name);
    this->setAuthor(author);
}

LibraryBook::~LibraryBook()
{
}

void LibraryBook::print()
{
    cout << "Id: " << this->getId() << ", Name: " << this->getName() << ", Author: " << this->getAuthor() << endl;
}

void LibraryBook::setAuthor(string author){ this->author = author; }
string LibraryBook::getAuthor(){ return this->author; }