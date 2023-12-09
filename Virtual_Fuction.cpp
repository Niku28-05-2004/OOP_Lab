#include <iostream>

class Shape {
public:
    // Virtual function to calculate the area of the shape
    virtual double calculateArea() const {
        return 0.0; // Default implementation (can be overridden by derived classes)
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Implementation of the virtual function for calculating the area of the circle
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize the length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the virtual function for calculating the area of the rectangle
    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    double circleRadius, rectangleLength, rectangleWidth;

    // User input for the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> circleRadius;

    // User input for the dimensions of the rectangle
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> rectangleLength;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> rectangleWidth;

    // Creating objects of Circle and Rectangle classes
    Circle circle(circleRadius);
    Rectangle rectangle(rectangleLength, rectangleWidth);

    // Using virtual functions to calculate and display the areas
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;
    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
