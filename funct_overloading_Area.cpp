#include <iostream>
using namespace std;
// Function to calculate the area of a rectangle
int calculateArea(int length, int width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a square
float calculateArea(float side) {
    return side * side;
}

int main() {
    char choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "a) Calculate the area of a rectangle\n";
        std::cout << "b) Calculate the area of a triangle\n";
        std::cout << "c) Calculate the area of a square\n";
        std::cout << "x) Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 'a': {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "Area of the rectangle: " << calculateArea(length, width) << std::endl;
                break;
            }

            case 'b': {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the triangle: " << calculateArea(base, height) << std::endl;
                break;
            }

            case 'c': {
                double side;
                std::cout << "Enter the side of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateArea(side) << std::endl;
                break;
            }

            case 'x':
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 'x');

    return 0;
}
