#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }

    return true; // No factors found, it's a prime number
}

int main() {
    int userInput;

    // User input for the number
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;

    // Check if the entered number is prime
    if (isPrime(userInput)) {
        std::cout << userInput << " is a prime number.\n";
    } else {
        std::cout << userInput << " is not a prime number.\n";
    }

    return 0;
}
