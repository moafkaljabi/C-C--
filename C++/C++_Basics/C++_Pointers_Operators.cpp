// C++ Pointers Operators
/*

C++ provides two pointer operators, which are (a) Address of Operator & and (b) Indirection Operator *.

A pointer is a variable that contains the address of another variable or you can say that a variable that contains the address of another variable is said to "point to" the other variable. A variable can be any data type including an object, structure or again pointer itself.

The . (dot) operator and the -> (arrow) operator are used to reference individual members of classes, structures, and unions.

The Address of Operator &
The & is a unary operator that returns the memory address of its operand. For example, if var is an integer variable, then &var is its address. This operator has the same precedence and right-to-left associativity as the other unary operators.

You should read the & operator as "the address of" which means &var will be read as "the address of var".

The Indirection Operator *
The second operator is indirection Operator *, and it is the complement of &. It is a unary operator that returns the value of the variable located at the address specified by its operand.

The following program executes the two operations


#include <iostream>


int main () {
   int  var;
   int  *ptr;
   int  val;

   var = 3000;

   // take the address of var
   ptr = &var;

   // take the value available at ptr
   val = *ptr;
  std::cout << "Value of var :" << var << std::endl;
  std::cout << "Value of ptr :" << ptr << std::endl;
  std::cout << "Value of val :" << val << std::endl;

   return 0;
}
When the above code is compiled and executed, it produces the following result −

Value of var :3000
Value of ptr :0xbff64494
Value of val :3000

*/

#include <iostream>
int main()
{

    int Val = 3000;
    int *Ptr = &Val;
    int Var = *Ptr;
    int &Var2 = *Ptr;

    std::cout << " The value of Val: " << Val << std::endl;
    std::cout << " The value of Ptr: " << Ptr << std::endl;
    std::cout << " The value of Var: " << Var << std::endl;
    std::cout << "The value of Var2: " << Var2 << std::endl;

    return 0;
}