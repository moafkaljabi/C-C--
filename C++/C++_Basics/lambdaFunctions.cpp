#include <iostream>
using namespace std;


int main(){

    int a {10};
    int b = 20;

    // capture all (in the capture list) by value
    auto func1 = [=](){
        std::cout << "The value of a: " << a <<std::endl; 
    };
    for (int i{0}; i<5; i++){
        std::cout << "Outer value: " << a << std::endl;
        func1();
        ++a;
    }

    std::cout<< "===============" <<std::endl;

    auto func2 = [&](){
        std::cout << "The value of b: " << b <<std::endl; 
    };

    // capture all (in the capture list) by reference
    for (int i{0}; i<5; i++){
        std::cout << "Outer value: " << b << std::endl;
        func2();
        ++a;
    }
    
    return 0;
}



