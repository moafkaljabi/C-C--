
// #include <iostream>
// using namespace std;

// int num;

// bool result(int x) {
//     return x % 3 == 0;
// }

// int main() {
//     cout << "Enter a number: ";

//     if (cin >> num) { // Check if input is a valid number
//         if (num < 0) {
//             cout << "No negative numbers" << endl;
//         } else {
//             cout << boolalpha << result(num) << endl;
//         }
//     } else {
//         cout << "Your input is not a number" << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int num;
bool result(int x);

bool result(int x){
    if (x % 3 == 0){
        return true;
    }
    else // (x % 3 != 0)
    
        return false;
}

int main(){
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num > 0)
    {
        std::cout << boolalpha << result(num) << std::endl;
    }
    else if (num < 0)
    {
        std::cout << "No negative numbers" << std::endl;;
    }
    else
    {
        std::cout << "Your input is not a number" << std::endl;
    }
    
    return 0;
}