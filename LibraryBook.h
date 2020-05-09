#pragma once
#include "LibraryBase.h"

using namespace std;

class LibraryBook: public LibraryBase
{
private:
    string author;
public:
    LibraryBook();
    LibraryBook(int id, string name, string author);
    ~LibraryBook();
    void print() override;
    void setAuthor(string author);
    string getAuthor();
};
