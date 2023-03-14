#include <iostream>

int main(){

    double length;

    std::cout << "Bitte eine Zahl eingeben, um Umfang und Flächeninhalt einer Quadrats zu berechnen: ";
    std::cin >> length;

    double resultUmfang = 4*length;
    double resultArea = length*length;

    std::cout << "Umfang beträgt: " << resultUmfang << " cm" << std::endl;
    std::cout << "Flächeninhalt beträgt: " << resultArea << " cm^2" << std::endl;







    return 0;
}