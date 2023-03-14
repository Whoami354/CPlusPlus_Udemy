#include <iostream>

int main(){

    int sum = 10;

    do
    {
    std::cout << "\nCurrent sum: " << sum << " Enter the next value: " << std::endl;
        int input;
        std::cin >> input;
        sum+=input;
    }while (sum < 10);
    
    
    
    
    return 0;
}