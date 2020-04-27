#include "LibraryMagazine.h"

LibraryMagazine::LibraryMagazine(){}
LibraryMagazine::LibraryMagazine(int id, string name, int issue)
{
    this->setId(id);
    this->setName(name);
    this->setIssue(issue);
}
LibraryMagazine::~LibraryMagazine(){}

void LibraryMagazine::print()
{
    cout << "Id: " << this->getId() << ", Name: " << this->getName() << ", Issue: " << this->getIssue() << endl;
}

void LibraryMagazine::setIssue(int issue){ this->issue = issue; }
int LibraryMagazine::getIssue(){ return this->issue; }