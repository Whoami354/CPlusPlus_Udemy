#include <iostream>

int main(){

    //Heap allocation = Speicherreservirung
    int *p_zahl = new int; //int *p = new int{4}; geht auch
    *p_zahl = 4;

    //Heap de-allocation
    delete p_zahl;
    std::cout << "Memory address of pointed value: " << p_zahl << std::endl;

    p_zahl = nullptr;
    std::cout << "Memory address of pointed value: " << p_zahl << std::endl;

    if(p_zahl!=nullptr){
        std::cout << "Value of the memory address p points to: " << *p_zahl << std::endl;
    }

    return 0;
}