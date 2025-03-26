#include <iostream>
#include <string>
int main() {
	// First C++ Program: Hello World
    std::cout << "Hello, World!\n" << std::endl;
    
// Basic Input/Output (User Name and Age)
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); 

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old.\n" << std::endl;


// Setting Up Development Environment (Sum of Two Numbers)
    double num1, num2, sum;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "Sum: \n" << sum << std::endl;

    return 0;
}

    
    
    


