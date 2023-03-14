#include <iostream>
#include <iomanip>

// 1a: C++: static_cast<newDType>(varName) - convert objects from one type to another
// 1b: C: (newType)(varname)
//Easier to read, less prone to errors


int main(){
    double number = 3.14;
    std::cout << std::setprecision(30) << number << std::endl;

    int number2 = number;
    std::cout << std::setprecision(30) << number2 << std::endl;

    //C-Casting
    //(newType)(varname)
    float number3 = (float)(number);
    std::cout << std::setprecision(30) << number3 << std::endl;

    double number4 = (double)(number3);
    std::cout << std::setprecision(30) << number4 << std::endl;

    //C++ casting
    //static_cast<newDType>(varName)
    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(30) << number5 << std::endl;

    double number6 = static_cast<double>(number5);
    std::cout << std::setprecision(30) << number6 << std::endl;

    int number7 = 133700;
    std::cout << number7 << std::endl;
    char number8 = static_cast<char>(number7);
    std::cout << static_cast<int>(number8) << std::endl;

    return 0;
}