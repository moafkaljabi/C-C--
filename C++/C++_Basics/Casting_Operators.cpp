// Casting Operators
// changes the datatype of a variable...     i.e.  "float" to "int".

#include <iostream>
using namespace std;
int main()
{
    double a = 22.22222;
    float b = 21.22;

    int c;

    c = (int)a;
    cout << " Value of (int) a = " << c << endl;

    c = (int)b;
    cout << " Value of (int) b = " << c << endl;
    return 0;
}