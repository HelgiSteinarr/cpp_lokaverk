#include "LibraryBase.h"

using namespace std;

class LibraryVideos: public LibraryBase
{
private:
    int length;  // In minutes
public:
    LibraryVideos();
    ~LibraryVideos();

    void setLength(int length);
    int getLength();
};

