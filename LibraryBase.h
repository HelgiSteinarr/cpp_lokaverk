#include <iostream>
#include <string>

using namespace std;

class LibraryBase
{
private:
    int id;
    string name;
public:
    LibraryBase();
    LibraryBase(int id, string name);
    ~LibraryBase();

    void setId(int id);
    int getId();
    virtual void print();

    void setName(string name);
    string getName();
};