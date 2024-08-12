#include <iostream>

class Example {
private:
    int value;

public:
    // Constructor that initializes value using the parameter passed
    Example(int value) {
        this->value = value;  // Using this-> to distinguish between the member variable and the parameter
    }

    // Method to set the value
    void setValue(int value) {
        this->value = value;  // 'this->value' refers to the member variable, 'value' is the parameter
    }

    // Method to get the value
    int getValue() const {
        return this->value;  // Can be written as 'value' since it's unambiguous, but 'this->value' is more explicit
    }

    // Method that returns the object itself
    Example& incrementValue() {
        this->value++;
        return *this;  // Returning the object itself
    }
};

int main() {
    Example obj(10);

    std::cout << "Initial value: " << obj.getValue() << std::endl;

    obj.setValue(20);
    std::cout << "Updated value: " << obj.getValue() << std::endl;

    obj.incrementValue().incrementValue();  // Chaining method calls
    std::cout << "After incrementing twice: " << obj.getValue() << std::endl;

    return 0;
}
