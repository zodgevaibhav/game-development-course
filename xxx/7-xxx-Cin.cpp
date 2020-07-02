#include<iostream>   

int main()
{
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;
    std::cin >> playerGuess;
    std::cout << std::endl << "Player guessed value as - " << playerGuess;

/*
 // Multiple Input by Space or enter

    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;
    std::cout << std::endl << "Player guessed value as A - " << playerGuessA;
    std::cout << std::endl << "Player guessed value as B - " << playerGuessB;
    std::cout << std::endl << "Player guessed value as C - " << playerGuessC;
*/
    return 0;
}