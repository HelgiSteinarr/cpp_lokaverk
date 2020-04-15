#include "LibraryBase.h"

using namespace std;

class LibraryMagazines: public LibraryBase
{
private:
    int issue;
public:
    LibraryMagazines();
    ~LibraryMagazines();

    void setIssue(int issue);
    int getIssue();
};

