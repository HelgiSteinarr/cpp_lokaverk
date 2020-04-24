#include "LibraryBase.h"

using namespace std;

class LibraryMagazines: public LibraryBase
{
private:
    int issue;
public:
    LibraryMagazines();
    LibraryMagazines(int id, string name, int issue);
    ~LibraryMagazines();
    void print();
    void setIssue(int issue);
    int getIssue();
};

