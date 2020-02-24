#include <iostream>

int main()
{
    //Print welcome messages to the terminal
    std::cout << "You are a hacker breaking into NASA's secure server";
    std::cout << std::endl;
    std::cout << "Enter the correct security password to continue..." << std::endl;

    
    //Declare 3 number code
    const int a = 4;
    const int b = 3;
    const int c = 2;

    /*
    Declare sum and product variable
    */

    const int sum = a + b + c;
    const int product = a * b * c;

    //Print sumb and product to the terminal    
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add-up to: " << sum << std::endl;
    std::cout << "The codes multiply to give: " << product << std::endl;

    return 0;
}