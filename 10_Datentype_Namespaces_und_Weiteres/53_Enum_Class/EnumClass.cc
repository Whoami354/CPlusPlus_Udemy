#include <iostream>

//1.) Two enums cannot share the same names
//2.) No variable can have a name which already reserved by an enum
//3.) Enums are not type safe

enum class Permissionlevel : unsigned char {
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

enum class ExamPersons{
    STUDENT,
    INSTRUCTOR
};

int main(){

    Permissionlevel permission_level_jan = Permissionlevel::INSTRUCTOR;
    Permissionlevel permission_level_peter = Permissionlevel::STUDENT;

    ExamPersons jan = ExamPersons::INSTRUCTOR;
    ExamPersons peter = ExamPersons::STUDENT;


    return 0;
}