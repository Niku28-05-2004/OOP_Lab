#include <iostream>
#include <string>

class Student {
protected:
    std::string studentName;
    int rollNumber;

public:
    // Function to input student details
    void inputStudentDetails() {
        std::cout << "Enter student name: ";
        std::cin >> studentName;
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
    }
};

class Test : public Student {
protected:
    int marks[5];

public:
    // Function to input test marks
    void inputTestMarks() {
        std::cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
    }
};

class Result : public Test {
public:
    // Function to display student details and test marks
    void displayResult() {
        std::cout << "\nStudent Details:\n";
        std::cout << "Name: " << studentName << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";

        std::cout << "\nTest Marks:\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": " << marks[i] << "\n";
        }
    }
};

int main() {
    Result studentResult;

    // Input student details and test marks
    studentResult.inputStudentDetails();
    studentResult.inputTestMarks();

    // Display student result
    studentResult.displayResult();

    return 0;
}
