#include <iostream>
#include <string>

// Base class for personal information
class PersonalInfo {
protected:
    std::string name;
    int age;

public:
    PersonalInfo() {
        std::cout << "Enter Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Age: ";
        std::cin >> age;
        std::cin.ignore(); // Ignore the newline character in the buffer
    }

    void displayPersonalInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Base class for job information
class JobInfo {
protected:
    std::string companyName;
    double salary;

public:
    JobInfo() {
        std::cout << "Enter Company Name: ";
        std::getline(std::cin, companyName);

        std::cout << "Enter Salary: $";
        std::cin >> salary;
    }

    void displayJobInfo() {
        std::cout << "Company: " << companyName << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

// Derived class for employee biodata, inheriting from both PersonalInfo and JobInfo
class EmployeeBiodata : public PersonalInfo, public JobInfo {
public:
    EmployeeBiodata() : PersonalInfo(), JobInfo() {}

    void displayEmployeeBiodata() {
        std::cout << "\nEmployee Biodata:\n";
        displayPersonalInfo();
        displayJobInfo();
    }
};

int main() {
    // Creating an object of the EmployeeBiodata class
    EmployeeBiodata employee;

    // Displaying employee biodata
    employee.displayEmployeeBiodata();

    return 0;
}
