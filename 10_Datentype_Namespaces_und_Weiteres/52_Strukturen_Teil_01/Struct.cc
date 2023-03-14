#include <iostream>

enum Permissionlevel {
    STUDENT = 1,
    TUTOR =2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

struct UserData {
    char* name;
    unsigned int id;
    Permissionlevel permission_level;
};

void greet_permission_level(Permissionlevel level){

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
    Permissionlevel permission_level_peter = Permissionlevel::STUDENT;

    UserData user_jan = {"Jan", 108014222, permission_level_jan};
    
    greet_permission_level(user_jan.permission_level);

    UserData user_peter;
    user_peter.name = "Peter";
    user_peter.id = 100153456;
    user_peter.permission_level = permission_level_peter;
    greet_permission_level(user_peter.permission_level);


    return 0;
}