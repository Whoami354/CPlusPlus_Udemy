#include <iostream>

//&: Reference
// *p: Value of that memory adress (De-Reference)

int main(){

    int number = 5;

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl; //3c

    int *p = &number;

    std::cout << "Value of p: " << p << std::endl; //3 c
    std::cout << "Value of the memory adress tha p points to: " << *p << std::endl;


    return 0;
}