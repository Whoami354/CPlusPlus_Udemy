#include <iostream>

int main(){

    //Heap allocation = Speicherreservirung
    int *p = new int; //int *p = new int{4}; geht auch
    *p = 4;


    std::cout << "Memory address of p: " << &p << std::endl;
    std::cout << "Memory address of pointed value: " << p << std::endl;
    std::cout << "Value of the memory address p points to: " << *p << std::endl;

    *p = 1347;

    std::cout << "Memory address of p: " << &p << std::endl;
    std::cout << "Memory address of pointed value: " << p << std::endl;
    std::cout << "Value of the memory address p points to: " << *p << std::endl;

    //Heap de-allocation
    delete p;

    return 0;
}