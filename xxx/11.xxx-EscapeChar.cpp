#include<iostream>   

int main()
{
    
    std::cout << "\nYou are a secret agent breaking into a secure server room \n \n";

    std::cout << "You need to enter the three number to continue... >> \n";
    
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The code add-up to : 9 \n";
    std::cout << "+ The code multiply to give : 24\n";
    
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;

    if((9 == (playerGuessC+playerGuessB+playerGuessA)) && (24==(playerGuessC*playerGuessB*playerGuessA)))
    {
        std::cout << "\n\nYou have WON !!! \n";
        std::cout <<"\n\n Your sum guess is correct !!! \n\n";     
    }else
    {
        std::cout << "\n\n You LOOSE :( \n\n";
    }
    

    return 0;
}