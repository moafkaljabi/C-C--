/*

1
bool

Stores either value true or false.

2
char

Typically a single octet (one byte). This is an integer type.

3
int

The most natural size of integer for the machine.

4
float

A single-precision floating point value.

5
double

A double-precision floating point value.

6
void

Represents the absence of type.

7
wchar_t

A wide character type.

*/

#include <iostream>
using namespace std;

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main()
{
   // Variable definition:
   int a, b;
   int c;
   float f;

   // actual initialization
   a = 10;
   b = 20;
   c = a + b;

   cout << c << endl;

   f = 70.0 / 3.0;
   cout << f << endl;

   return 0;
}