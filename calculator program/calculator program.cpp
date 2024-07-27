// calculator program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int sum_calculation(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}



int main()
{
    int num1 = 0;
    int num2 = 0;
    std::string operation;
    char choise;

    while (true)
    {
        std::cout << "Type operation mode (sum, subtract, devide, multiply)" << std::endl;
        std::cin >> operation;
        std::cout << "Type first number in" << std::endl;
        std::cin >> num1;
        std::cout << "Type second number in" << std::endl;
        std::cin >> num2;
        
        if (operation == "sum")
        {
            std::cout << "The sum of the numbers is -" << sum_calculation(num1, num2) << std::endl;
        }
        
        

        
        

        std::cout << "Do you want to perform another operation(y/n)" << std::endl;
        std::cin >> choise;
        if(choise != 'Y' && choise != 'y')
        {
            break;
        }
    }
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
