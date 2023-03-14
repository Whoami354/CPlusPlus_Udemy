#include <iostream>


int main(){

    char first_name[] = {'G','r','e','g','\0'};

    std::cout << first_name << std::endl;

    char last_name[] = "Mehlhorn";

    std::cout << last_name << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << "Last Name[i]: " << last_name[i] << std::endl;
    }
    


    return 0;
}