#include<iostream>   
/* #include is preprocessor directive. 
    iostream is header file. we dont have ; at the end
    here we direct compiler to copy the code from header file and use while compile
*/
int main()
{
    std::cout << "Hello world ";

    /*
        std is name space. It is like surname
        :: is scope operator. This indicate that find the code in name space provided
        cout is the console out and what to put on consoe added after << symbol
    */
    return 0;
}


/*
Compile on Mac - g++ xxx.cpp -o xxx
Compile on Windows - cl xxx.cpp -o xxx

Compile on Mac - ./xxx
Compile on Windows - xxx



*/