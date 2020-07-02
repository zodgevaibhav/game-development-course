#include<iostream>   

int main()
{
    
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    int a=2; 
    int b=3;
    int c=4;

    int addition = a+b+c; // Addition, Substraction, Multiplication, Division
    int multiplication = a*b*c; // Addition, Substraction, Multiplication, Division
    int division = a/b/c; // Addition, Substraction, Multiplication, Division

    std::cout << std::endl;
    std::cout << "+ Addition is - "<<addition <<std::endl;
    std::cout << "+ Substraction is - "<<multiplication <<std::endl;
    std::cout << "+ Divisoin is - "<<division <<std::endl;

    return 0;
}