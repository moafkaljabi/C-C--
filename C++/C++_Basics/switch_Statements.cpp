/*
// Switch Statements

#include <iostream>
using namespace std;

int main()
{
    char grade = 'B';

    switch (grade)
    {
    case 'A':
        cout << " Excellent " << endl;
        break;

    case 'B':
    case 'C':
        cout << " Good " << endl;
        break;

    case 'D':
        cout << " Pass " << endl;
        break;

    case 'F':
        cout << "Fail" << endl;
        break;

    default:
        cout << " grade invalid." << endl;
    }
    // cout << " Your Grade is: " << grade << endl;
    printf(" Your grade is: %c \n", grade);
    return 0;
}

*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    switch (a)
    {
    case 10:
        cout << " This is part of outer switch " << endl;

        switch (b)
        {
        case 20:
            cout << " This is part of inner switch " << endl;
        }
    }

    cout << " Value of a is: " << a << endl;
    cout << " Value of b is: " << b << endl;

    return 0;
}