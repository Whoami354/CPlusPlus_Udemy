#include <iostream>

int main(){

    double radius;
    const double PI = 3.1415927;

    std::cout << "Bitte geben Sie den Radius ein: ";
    std::cin >> radius;

    double umfang = 2*PI*radius;
    double fläche = PI*(radius*radius);

    std::cout << "Der Umfang des Kreises beträgt: " << umfang << " cm" << std::endl;
    std::cout << "Der Flächeninhalt des Kreises beträgt: " << fläche << " cm^2" << std::endl;



    return 0;
}