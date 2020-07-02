#include<iostream>   

int main()
{
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "You need to enter the three number to continue... >> " ;
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;
    std::cout << "Guess the sum of 3 numbers >> ";
    std::cin >> sumGuess;

    if(sumGuess == (playerGuessC+playerGuessB+playerGuessA))
    {
        std::cout <<std::endl << std::endl << "You have WON !!! " <<std::endl;
        std::cout <<std::endl << "      Your sum guess is correct !!! " <<std::endl<<std::endl;     
    }else
    {
        std::cout <<std::endl << std::endl << "You LOOSE :( " <<std::endl<<std::endl;
    }
    

    return 0;
}