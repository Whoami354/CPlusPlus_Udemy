#include <iostream>

int main(){

    float user_balance[10] = {};

    for(int i = 0; i < 10.; i++){
        std::cout << "Balance[i] = " << user_balance[i] << std::endl;
    }

    for(int i = 0; i < 10.; i++){
        user_balance[i] = i*10.0f;
    }

    for(int i = 0; i < 10.; i++){
        std::cout << "Balance[i] = " << user_balance[i] << std::endl;
    }
    
    return 0;
}