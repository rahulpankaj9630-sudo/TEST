#include <iostream>

int main() {
    int num1, num2, sum; // Declare integer variables
    std::cout << "Enter first number: ";
    std::cin >> num1; // Read the first number from the user
    std::cout << "Enter second number: ";
    std::cin >> num2; // Read the second number from the user
    sum = num1 + num2; // Calculate the sum
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
