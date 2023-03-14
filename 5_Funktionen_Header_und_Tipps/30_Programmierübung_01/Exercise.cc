// Hier die benötigten Includes und using Befehle
#include <iostream>

// Hier die Definition der Funktion
void mod_cross_sum(int i2, int j2){
    for(int i = 0; i<=i2; i++){
        for(int j = 0; j<=j2; j++){
            if((i+j)%2==0){
                std::cout << "i: " << i << ", j: " << j << " := Gerade!"  << std::endl;
            }else{
                std::cout << "i: " << i << ", j: " << j << " := Ungerade!"  << std::endl;
            }
        }
    }
}