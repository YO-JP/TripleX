#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
            //Print welcome messages to the terminal
    std::cout << "\n\nYou are a hacker breaking into NASA's Level " <<Difficulty;
    std::cout << " secure server\nEnter the correct security password to continue...\n\n";

}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    //Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    /*
    Declare sum and product variable
    */

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal    
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct <<std::endl;

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nSucess! Keep proceeding to next level";
        return true;
    }
    else
    {
        std::cout << "\n***You entered the wrong code! Try again before FBI detects you!";
        return false;
    }
}

int main()
{   
    srand(time(NULL));
    int LevelDifficulty =1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;   
        }
    }
    
    std::cout << "\n***You have successfully hacked all levels of NASA's secure server***\n";
    return 0;
}