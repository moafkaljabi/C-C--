/*
#include <iostream>
using namespace std;
int main()
{

    int fcb(int x, int y);
    int fcb(int x, int y)

    {
        int x = 5;
        int y = 12;
        cout << "the coordinates are: (%d,%d) " << x << y << endl;
        return 0;
    }
    cout << "the coodinates are : " << endl;
    int fcb(x, y);

    return 0;
}

*/
#include <iostream>
using namespace std;

typedef int MyMeasure; // "typedef" allows u to create another name for a datatype such "int". i.e. typedef type newname.

int main()
{
    int x = 10;
    int y = 20;
    MyMeasure z = 10; // using "typedef" we gave "int" another name , "MyMeasure".
    printf(" Coordinates are (%d,%d,%d)", x, y, z);
    return 0;
}
