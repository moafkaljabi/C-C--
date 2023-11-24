// Polymorphism

#include <iostream>
using namespace std;

class Animal
{
public:
    void AnimalSound()
    {
        cout << "Sound of an animal \n";
    }
};

class Dog : public Animal
{
public:
    void AnimalSound()
    {
        cout << "Sound of a dog is: \n";
    }
};

class Horse : public Animal
{
public:
    void AnimalSound()
    {
        cout << "Sound of a horse is: \n";
    }
};

int main()
{
    Animal animalObj;
    Dog dogObj;
    Horse horseObj;

    animalObj.AnimalSound();
    dogObj.AnimalSound();
    horseObj.AnimalSound();

    return 0;
}