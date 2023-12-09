#include <iostream>

// Function to calculate the square of an integer
int square(int num) {
    return num * num;
}

// Function to calculate the square of a double
double square(double num) {
    return num * num;
}

int main() {
    int intNumber;
    double doubleNumber;

    // Input for integer
    std::cout << "Enter an integer: ";
    std::cin >> intNumber;

    // Input for double
    std::cout << "Enter a double: ";
    std::cin >> doubleNumber;

    // Calculate and display the square of the integer
    std::cout << "Square of " << intNumber << " is: " << square(intNumber) << std::endl;

    // Calculate and display the square of the double
    std::cout << "Square of " << doubleNumber << " is: " << square(doubleNumber) << std::endl;

    return 0;
}
