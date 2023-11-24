// classes and contructors
// we can put a function inside a class.
// we can define the function inside or outside the class
// if outside, we declare it inside the class and use :: opertator when defining it outside of it.

// a constructor is a function inside the class wih the same name as the claas.

#include <iostream>
using namespace std;

class car
{
public:
    string brand;
    string name;
    int year;

    int speed(int max);
};

int car ::speed(int max)
{

    return max;
}

class my2ndClass // class with constructor.
{
public:
    int birthYear;
    string dogBread;

    my2ndClass(int x, string y)
    {
        birthYear = x;
        dogBread = y;
    }
};

int main()
{
    car carObj1;

    carObj1.brand = "GMC";
    carObj1.name = "Yukon";
    carObj1.year = 2023;

    car carObj2;

    carObj2.brand = "Cadillac";
    carObj2.name = "Escalade";
    carObj2.year = 2022;

    car speedObj1;

    my2ndClass dogObj1(2015, "Chow Chow");

    cout << carObj1.brand << " " << carObj1.name << " " << carObj1.year << " \n";
    cout << carObj2.brand << " " << carObj2.name << " " << carObj2.year << " \n";
    cout << "Maximum speed is: " << speedObj1.speed(220) << endl;

    cout << dogObj1.birthYear << " " << dogObj1.dogBread << "\n\n";

    return 0;
}