#include "LibraryBase.h"

using namespace std;

class LibraryBooks: public LibraryBase
{
private:
    string author;
public:
    LibraryBooks();
    ~LibraryBooks();

    void setAuthor(string author);
    string getAuthor();
};

