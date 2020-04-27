#include "LibraryBase.h"

using namespace std;

class LibraryMagazine: public LibraryBase
{
private:
    int issue;
public:
    LibraryMagazine();
    LibraryMagazine(int id, string name, int issue);
    ~LibraryMagazine();
    void print();
    void setIssue(int issue);
    int getIssue();
};

