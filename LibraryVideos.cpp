#include "LibraryVideos.h"

LibraryVideos::LibraryVideos(){}
LibraryVideos::LibraryVideos(int id, string name, int length)
{
    this->setId(id);
    this->setName(name);
    this->setLength(length);
}
LibraryVideos::~LibraryVideos(){}

void LibraryVideos::print()
{
    cout << "Id: " << this->getId() << ", Name: " << this->getName() << ", Length: " << this->getLength() << ((this->getLength > 1 ) ? "Minutes" : "Minute") << endl;
}

void LibraryVideos::setLength(int length){ this->length = length; }
int LibraryVideos::getLength(){ return this->length; }