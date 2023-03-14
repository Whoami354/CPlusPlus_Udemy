#include <iostream>

//Enum values are integers
//Enum values in UPPERCASE
//Enum values are constant

enum Permissionlevel {
    STUDENT = 1,
    TUTOR =2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

void greet_permission_level_if(Permissionlevel level){

    if (level == Permissionlevel::STUDENT)
    {
        std::cout<<"Hello STUDENT"<<std::endl;
    }else if (level == Permissionlevel::TUTOR)
    {
        std::cout<<"Hello TUTOR"<<std::endl;
    }else if (level == Permissionlevel::INSTRUCTOR)
    {
        std::cout<<"Hello INSTRUCTOR"<<std::endl;
    }else if (level == Permissionlevel::ADMIN)
    {
        std::cout<<"Hello Admin"<<std::endl;
    }else{
        std::cout<<"UNKNOWN! Error!"<<std::endl;
    }
}

void greet_permission_level_switch(Permissionlevel level){

    switch (level)
    {
    case Permissionlevel::STUDENT:{
        std::cout<<"Hello STUDENT"<<std::endl;
        break;
    }case Permissionlevel::TUTOR:{
        std::cout<<"Hello TUTOR"<<std::endl;
        break;
    }case Permissionlevel::INSTRUCTOR:{
        std::cout<<"Hello INSTRUCTOR"<<std::endl;
        break;
    }case Permissionlevel::ADMIN:{
        std::cout<<"Hello ADMIN"<<std::endl;
        break;
    }
    default:{
        std::cout<<"UNKNOWN! Error!"<<std::endl;
        break;
    }
    
    }
}

int main(){

    Permissionlevel permission_level_jan = Permissionlevel::INSTRUCTOR;
    greet_permission_level_switch(permission_level_jan);
    Permissionlevel permission_level_peter = Permissionlevel::STUDENT;
    greet_permission_level_if(permission_level_peter);
    
    return 0;
}