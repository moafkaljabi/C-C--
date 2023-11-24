#include <iostream>

bool isDivisibleBy3(int num) {
    if (num < 0) {
        std::cout << "No negative numbers" << std::endl;
        return false; // Return false for negative numbers
    }
    return num % 3 == 0;
}

int main() {
    int number;

    // Get user input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is negative or divisible by 3
    if (isDivisibleBy3(number)) {
        std::cout << number << " is divisible by 3." << std::endl;
    }

    return 0;
}
