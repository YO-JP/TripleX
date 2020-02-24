#include <iostream>

int main()
{
    //Print welcome messages to the terminal
    std::cout << "You are a hacker breaking into NASA's secure server\n";
    std::cout << "Enter the correct security password to continue...\n\n";

    
    //Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    /*
    Declare sum and product variable
    */

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal    
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code\n";
    std::cout << "The codes add-up to: " << CodeSum;
    std::cout << "\nThe codes multiply to give: " << CodeProduct;

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nHack: Successful";
    }
    else
    {
        std::cout << "\nDetected! Run!";
    }
    
    return 0;
}