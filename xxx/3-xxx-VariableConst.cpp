#include<iostream>   

int main()
{
    
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    int a=2; 
    
    /*
    
    Variable mean the value of subject can change
    int is data type
    a name of variable
    = is assignment operator
    2 is value
    */
    int b=3;
    int c=4;

    int addition = a+b+c; // Addition, Substraction, Multiplication, Division

    std::cout << addition;

    a=10; 
    /*
    
    Assign new value to variable a. Addition will not get this new value in upper statements.
    Declaratoion required to assign value. Compiler will show error message if variable is not declared

    If we dont want to change the value of variable that can be done using const
    */

   const int d = 10;
   // d=5;

   /*
    Compiler will not allow to allow to change valie of variable d to 5.
    it will throw error as "expression must be a modifiable lvalue"
   */

    return 0;
}