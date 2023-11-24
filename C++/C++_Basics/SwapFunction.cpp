#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    return;
}

int main()
{
    int a = 100;
    int b = 200;
    cout << " Value of x before swapping: " << a << endl;
    cout << " Value of y before swapping: " << b << endl
         << endl;

    swap(a, b);

    cout << " Value of x after swapping: " << a << endl;
    cout << " Value of y after swapping: " << b << endl;

    return 0;
}