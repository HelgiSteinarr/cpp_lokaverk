#include "LibraryMagazines.h"

LibraryMagazines::LibraryMagazines(){}
LibraryMagazines::LibraryMagazines(int id, string name, int issue)
{
    this->setId(id);
    this->setName(name);
    this->setIssue(issue);
}
LibraryMagazines::~LibraryMagazines(){}

void LibraryMagazines::print()
{
    cout << "Id: " << this->getId() << ", Name: " << this->getName() << ", Issue: " << this->getIssue() << endl;
}

void LibraryMagazines::setIssue(int issue){ this->issue = issue; }
int LibraryMagazines::getIssue(){ return this->issue; }