#include <iostream>

int modulo(int n1,int n2){
    //20%3=2; 20/3 = 6
    int result_integer_devision = n1/n2;


    //n1 - n2*result_integer_devision
    int remainder = n1-(n2*result_integer_devision);

    return remainder;
}

int main(){
    
    int a = 1337;
    int b = 17;

    std::cout << modulo(a,b)<<std::endl;
    std::cout << a%b<<std::endl;


    return 0;
}