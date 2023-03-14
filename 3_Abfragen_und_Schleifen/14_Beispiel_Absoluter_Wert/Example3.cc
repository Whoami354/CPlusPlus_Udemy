#include <iostream>

//x < 0: -x
//x >= 0: x

int main(){

    int value;
    std::cout << "Please enter the value: ";
    std::cin >> value;

    int absolute;

    if(value < 0){
        absolute = (-1)*value;
    }else{
        absolute = value;
    }

    std::cout << "The absolute value is: " << absolute << std::endl;

    return 0;
}