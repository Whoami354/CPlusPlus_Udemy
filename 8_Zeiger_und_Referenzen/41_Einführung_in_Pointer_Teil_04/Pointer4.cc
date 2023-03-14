#include <iostream>

void print_pointer(int *p){
    std::cout << "Deref: " << *p << ", Ref: " << p << ", Pointer Address: " << &p << std::endl; 
}

void print_pointer(double *p){
    std::cout << "Deref: " << *p << ", Ref: " << p << ", Pointer Address: " << &p << std::endl; 
}

int main(){

    int a = 1337;
    double b = -13.37;

    int *c = &a;

    print_pointer(c);

    *c -= 10;
    print_pointer(c);

    int *d = &a;
    print_pointer(d);

    *c += 10;
    print_pointer(c);

    *c = b;
    print_pointer(c);



    return 0;
}