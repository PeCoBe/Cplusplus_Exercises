#include <iostream>
#include <string>
#include <numeric>
#include <vector>

int main() 
{
    // Variables
    std::string name;
    int age;
    int firstNumber, secondNumber;
    std::vector<float> average = {10.0f, 34.5f, 234.32f, 282.0f};

    //////

    std::cout << "CI/CD exercises using C++\n" << std::endl;

    ///

    std::cout << "Whats your name?" << std::endl;
    std::cin >> name;
    std::cout << "Whats your age?" << std::endl;
    std::cin >> age;
    std::cout << name << std::endl;
    std::cout << age << std::endl;

    ///

    std::cout << "Input first number: " << std::endl;
    std::cin >> firstNumber;
    std::cout << "Input second number: " << std::endl;
    std::cin >> secondNumber;
    std::cout << "The total is :" << std::endl;
    std::cout << firstNumber + secondNumber << std::endl;

    ///

    std::cout << "Average of vector is: " << std::endl;
    std::cout << accumulate(average.begin(), average.end(), 0.0);

    return 0;

}