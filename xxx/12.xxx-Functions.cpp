#include<iostream>   

void PlayGame()
{
  
    
    //Get code from user
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;


    //Do check of code are correct and print result
    if((9 == (playerGuessC+playerGuessB+playerGuessA)) && (24==(playerGuessC*playerGuessB*playerGuessA)))
    {
        std::cout << "\n\nYou have WON !!! \n";
    }else
    {
        std::cout << "\n\n You LOOSE :( \n\n";
    }
    
}

void PrintIntroduction() //Function should be above main function or calling function
{
 // Print welcome message
    std::cout << "\nYou are a secret agent breaking into a secure server room \n \n";
    std::cout << "You need to enter the three number to continue...  \n";
    
    //Print rules
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The code add-up to : 9 \n";
    std::cout << "+ The code multiply to give : 24\n";
}

int main()
{
    PrintIntroduction();
    PlayGame();
    return 0;
}