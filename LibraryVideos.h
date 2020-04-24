#include "LibraryBase.h"

using namespace std;

class LibraryVideos: public LibraryBase
{
private:
    int length;  // In minutes
public:
    LibraryVideos();
    LibraryVideos(int id, string name, int length);
    ~LibraryVideos();
    void print();
    void setLength(int length);
    int getLength();
};

