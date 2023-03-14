#include <iostream>

void guessingGame(){
    bool has_won = false;

    std::cout << "Welcome to my Guessing-Game!" << std::endl;

    do{
        int number;
        std::cout << "Please enter your number between [0,10]: ";
        std::cin >> number;

        if(number >= 0 && number <= 10){
            if(number == 4){
                std::cout << "Congratulations, you won the Game!" << std::endl;
                has_won = true;
            }else if(number %2 == 0){
                std::cout << "Congratulations, you won the wooden spoon!" << std::endl;
            }else{
                std::cout << "You lost!" << std::endl;
            }
        }else{
            std::cout << "You must enter a number between [0, 10]." << std::endl;
        }

    }while (has_won == false);
}