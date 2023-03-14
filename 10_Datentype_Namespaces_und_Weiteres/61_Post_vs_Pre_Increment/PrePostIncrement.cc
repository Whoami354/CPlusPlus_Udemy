#include <iostream>

void func(int value) {
    std::cout << "Inner val: " << value << std::endl;
}

//i++; //Post-Increment
//++i; //Pre-Increment


int main(){

    int val = 0;
    
    std::cout << "Outer val: " << val << std::endl;
    func(val++);
    std::cout << "Outer val: " << val << std::endl;
    func(++val);
    std::cout << "Outer val: " << val << std::endl;




    return 0;
}