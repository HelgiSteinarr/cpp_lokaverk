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
    ~LibraryBase();

    void setId(int id);
    int getId();

    void setName(string name);
    string getName();
};

