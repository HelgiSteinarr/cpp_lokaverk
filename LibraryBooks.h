#include "LibraryBase.h"

using namespace std;

class LibraryBooks: public LibraryBase
{
private:
    string author;
public:
    LibraryBooks();
    LibraryBooks(int id, string name, string author);
    ~LibraryBooks();
    void print();
    void setAuthor(string author);
    string getAuthor();
};
