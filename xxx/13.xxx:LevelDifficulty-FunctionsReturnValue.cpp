#include<iostream>   


void PrintIntroduction(int LevelDifficulty) //Function should be above main function or calling function
{
 // Print welcome message
    std::cout << "\n\n\n ############## Welcome to XXX Game ############# \n \n";
    std::cout << "\nYou are a secret agent breaking into a level - "<<LevelDifficulty <<" Secure Server room \n \n";
    std::cout << "You need to enter the three number to continue...  \n";
    
  
}
bool PlayGame(int LevelDifficulty)
{
      PrintIntroduction(LevelDifficulty);
    
    //Get code from user
    int playerGuessA, playerGuessB, playerGuessC, playerGuess;
    int sumGuess, productGuess;
   
   
     //Print rules
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The code add-up to : 9 \n";
    std::cout << "+ The code multiply to give : 24\n";
    
    std::cin >> playerGuessA >> playerGuessB >> playerGuessC  ;


    //Do check of code are correct and print result
    if((9 == (playerGuessC+playerGuessB+playerGuessA)) && (24==(playerGuessC*playerGuessB*playerGuessA)))
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
    while (true)  //No ; at the end
    {
        bool bLevelComplete;
        bLevelComplete = PlayGame(LevelDifficulty);  //Variable scope
        std::cin.clear(); //clear if any error occue
        std::cin.ignore(); // discard the buffer

        if(bLevelComplete)  //No ; at the end
        {
            //Increase the level difficulty
            LevelDifficulty = LevelDifficulty +1 ; // One more way to do it ++LevelDifficulty
        }
    }
    return 0;
}