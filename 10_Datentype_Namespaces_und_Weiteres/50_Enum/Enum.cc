#include <iostream>

//Enum values are integers
//Enum values in UPPERCASE
//Enum values are constant

enum Permissionlevel {
    STUDENT = 1,
    TUTOR =2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

int main(){

    Permissionlevel permission_level_jan = Permissionlevel::INSTRUCTOR;
    Permissionlevel permission_level_peter = Permissionlevel::STUDENT;
    
    
    return 0;
}