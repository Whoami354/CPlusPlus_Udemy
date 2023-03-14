#include <iostream>

int main(){

    int year;
    std::cout << "Please enter your year: ";
    std::cin >> year;

    if(year%4==0 && (year%100!=0||year%400==0)){
        std::cout << "is a leep year" << std::endl;
    }else{
        std::cout << "is not a leep year" << std::endl;
    }



    return 0;
}