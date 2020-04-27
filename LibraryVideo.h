#include "LibraryBase.h"

using namespace std;

class LibraryVideo: public LibraryBase
{
private:
    int length;  // In minutes
public:
    LibraryVideo();
    LibraryVideo(int id, string name, int length);
    ~LibraryVideo();
    void print();
    void setLength(int length);
    int getLength();
};

