// Loop Types.

/*
// while loop

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    while (x <= 20)
    {
        cout << " Value of x is: " << x << endl;
        x++;
    }
    return 0;
}

*/

/*
// for loop

#include <iostream>
using namespace std;

int main()
{
    for (int x = 10; x <= 20; x++)
    {
        cout << " Value of x is: " << x << endl;
    }
    return 0;
}

*/

/*
// do while loop

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    do
    {
        cout << " Value of x is: " << x << endl;
        x++;
    }
    while (x <= 20);
    return 0;
}

*/

/*
// nested loops

#include <iostream>
using namespace std;

int main()
{

    int i, j;
    for (i = 2; i < 100; i++)
    {
        for (j = 2; j <= (i / j); j++)

            if (!(i % j))
                break; // if factor found, not prime.
        if (j > (i / j))
            cout << i << " is prime \n";
    }

    return 0;
}

*/

/*
// break statement

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    do
    {
        cout << " Value of x is: " << x << endl;
        x++;
        if (x > 15)
        {
            break;
        }
    } while (x < 20);
    return 0;
}

*/

/*
// continue statement

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    do
    {
        if (a == 15)
        {
            a = a + 1;

            continue;
        }
        cout << " Value of a is: " << a << endl;
        a = a + 1;

    }

    while (a < 20);
    return 0;
}

*/

/*
// goto statement


#include <iostream>
using namespace std;

int main () {
   // Local variable declaration:
   int a = 10;

   // do loop execution
   LOOP:do {
      if( a == 15) {
         // skip the iteration.
         a = a + 1;
         goto LOOP;
      }
      cout << "value of a: " << a << endl;
      a = a + 1;
   }
   while( a < 20 );

   return 0;
}


One good use of goto is to exit from a deeply nested routine. For example, consider the following code fragment −

for(...) {
   for(...) {
      while(...) {
         if(...) goto stop;
         .
         .
         .
      }
   }
}
stop:
cout << "Error in program.\n";
Eliminating the goto would force a number of additional tests to be performed.
 A simple break statement would not work here, because it would only cause the program to exit from the innermost loop.


*/
