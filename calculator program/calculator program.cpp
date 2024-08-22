// calculator program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

int sum_calculation(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int devide(int a, int b) {
    if (b == 0) {
        std::cout << "cannot devide by 0" << std::endl;
    } else {
        return a / b;
    }
}   

int num1 = 0;
int num2 = 0;

void another_operation() {
    char choise;

    std::cout << "Do you want to perform another operation(y/n)" << std::endl;
    std::cin >> choise;

    if (choise != 'Y' && choise != 'y') {
        std::cout << "Exiting program" << std::endl;
        exit(0);
    }
}

void calculator(){
    while (true){
        std::string operation;

        std::cout << "Type operation mode (sum, subtract, devide, multiply, exit)" << std::endl;
        std::cin >> operation;
        if (operation == "exit"){
            std::cout << "Exiting program" << std::endl;
            exit(0);
        } else if (operation == "subtract") {
            std::cout << "Type first number in" << std::endl;
            std::cin >> num1;
            std::cout << "Type second number in" << std::endl;
            std::cin >> num2;
            std::cout << "The sum of the numbers is - " << subtract(num1, num2) << std::endl;
            another_operation();
        } else if (operation == "devide") {
            std::cout << "Type first number in" << std::endl;
            std::cin >> num1;
            std::cout << "Type second number in" << std::endl;
            std::cin >> num2;
            std::cout << "The division of the numbers is - " << devide(num1, num2) << std::endl;
            another_operation();
        } else if (operation == "multiply") {
            std::cout << "Type first number in" << std::endl;
            std::cin >> num1;
            std::cout << "Type second number in" << std::endl;
            std::cin >> num2;
            std::cout << "The multiplication of the numbers is - " << multiply(num1, num2) << std::endl;
            another_operation();
        } else if (operation == "sum") {
            std::cout << "Type first number in" << std::endl;
            std::cin >> num1;
            std::cout << "Type second number in" << std::endl;
            std::cin >> num2;
            std::cout << "The sum of the numbers is - " << sum_calculation(num1, num2) << std::endl;
            another_operation();
        } else {
            std::cout << "invalid command" << std::endl;
        }
        

        
    }
}


int main(){
    calculator();

    return 0;
}
    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
