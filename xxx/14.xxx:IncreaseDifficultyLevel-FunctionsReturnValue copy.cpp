#include<iostream>   


void PrintIntroduction(int LevelDifficulty) //Function should be above main function or calling function
{
 // Print welcome message
    std::cout << "\n\n\n ############## Welcome to XXX Game ############# \n \n";
    std::cout << "\nYou are a secret agent breaking into a level - "<<LevelDifficulty <<" Secure Server room \n \n";
    std::cout << "You need to enter the three number to continue...  \n";
    
    //Print rules
    
}
bool PlayGame(int LevelDifficulty)
{
      PrintIntroduction(LevelDifficulty);
    
    //Get code from user
    int codeA=rand()%LevelDifficulty+LevelDifficulty;
    int CodeB=rand()%LevelDifficulty+LevelDifficulty;
    int CodeC=rand()%LevelDifficulty+LevelDifficulty;
    int codeSum = codeA+CodeB+CodeC;
    int CodeProduct = codeA*CodeB*CodeC;


    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
    
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The code add-up to : "<<codeSum<<" \n";
    std::cout << "+ The code multiply to give : "<<CodeProduct<< "\n";
    
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;


    //Do check of code are correct and print result
    if((codeSum == (playerGuessC+playerGuessB+playerGuessA)) && (CodeProduct==(playerGuessC*playerGuessB*playerGuessA)))
    {
        std::cout << "\n\nYou have WON !!! \n";
        return true;
    }else
    {
        std::cout << "\n\n You LOOSE :( \n\n";
        return false;
    }
    
}

int main()
{
    int LevelDifficulty =1;
    int MaxDifficulty = 5;
    while (LevelDifficulty <= MaxDifficulty) // < - Less than, > - Greater than , <= - Less than and equal...
    {
        bool bLevelComplete;
        bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            LevelDifficulty = LevelDifficulty +1 ;
        }
    }
    std::cout << "\n\n ################## Congratulation!!! You Complete the Game ############### \n \n";

    return 0;
}