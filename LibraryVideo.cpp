#include "LibraryVideo.h"

LibraryVideo::LibraryVideo(){}
LibraryVideo::LibraryVideo(int id, string name, int length)
{
    this->setId(id);
    this->setName(name);
    this->setLength(length);
}
LibraryVideo::~LibraryVideo(){}

void LibraryVideo::print()
{
    cout << "Id: " << this->getId() << ", Name: " << this->getName() << ", Length: " << this->getLength() << ((this->getLength > 1 ) ? "Minutes" : "Minute") << endl;
}

void LibraryVideo::setLength(int length){ this->length = length; }
int LibraryVideo::getLength(){ return this->length; }