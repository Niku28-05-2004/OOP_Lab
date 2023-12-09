#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline double calculateSquare(double number) {
    return number * number;
}

// Inline function to calculate the cube of a number
inline double calculateCube(double number) {
    return number * number * number;
}

int main() {
    double userInput;

    // User input for the number
    std::cout << "Enter a number: ";
    std::cin >> userInput;

    // Calculate and display the square and cube using inline functions
    std::cout << "Square of " << userInput << ": " << calculateSquare(userInput) << std::endl;
    std::cout << "Cube of " << userInput << ": " << calculateCube(userInput) << std::endl;

    return 0;
}
