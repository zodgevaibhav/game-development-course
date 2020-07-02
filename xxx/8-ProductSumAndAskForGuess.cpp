#include<iostream>   

int main()
{
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "You need to enter the three number to continue..." << std::endl;
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;
    std::cout << std::endl << "You have entered " << playerGuessA <<" " << playerGuessB <<" "<< playerGuessC <<std::endl;
    std::cout << "Guess the sum of 3 numbers - " << std::endl;
    std::cin >> sumGuess;
    std::cout << std::endl << "Guess the product of 3 numbers - " << std::endl;
    std::cin >> productGuess;

    std::cout <<std::endl << "You have guessed sum and product as "<<sumGuess <<" "<<productGuess <<std::endl; 


    return 0;
}