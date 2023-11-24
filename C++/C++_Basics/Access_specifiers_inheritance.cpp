// Access specifiers

#include <iostream>
using namespace std;

class Employee
{
protected:
    int Salary;
};

class Programmer : protected Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        Salary = s;
    }

    int getSalary()
    {
        return Salary;
    }
};

int main()
{
    Programmer salObj;
    salObj.setSalary(120000);
    salObj.bonus = 20000;
    cout << "Salary: " << salObj.getSalary()
         << "\n";
    cout << "Bonus: " << salObj.bonus << "\n";

    return 0;
}