// Multiple Inheritance

#include <iostream>
using namespace std;

class myClass
{
public:
    void myFunction()
    {
        cout << "Some content in my function.\n";
    }
};

class myOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some content in my other function.\n";
    }
};

class myChildClass : public myClass, public myOtherClass
{
public:
};

int main()
{
    myChildClass myObj1;

    myObj1.myFunction();
    myObj1.myOtherFunction();

    return 0;
}