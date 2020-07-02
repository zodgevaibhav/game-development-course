#include<iostream>   

int main()
{
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "You need to enter the three number to continue... >> "  <<std::endl;
    
    std::cout << "+ There are 3 numbers in the code "  <<std::endl;
    std::cout << "+ The code add-up to : 9 " <<std::endl;
    std::cout << "+ The code multiply to give : 24"  <<std::endl;
    
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;

    if((9 == (playerGuessC+playerGuessB+playerGuessA)) && (24==(playerGuessC*playerGuessB*playerGuessA)))
    {
        std::cout <<std::endl << std::endl << "You have WON !!! " <<std::endl;
        std::cout <<std::endl << "      Your sum guess is correct !!! " <<std::endl<<std::endl;     
    }else
    {
        std::cout <<std::endl << std::endl << "You LOOSE :( " <<std::endl<<std::endl;
    }
    

    return 0;
}