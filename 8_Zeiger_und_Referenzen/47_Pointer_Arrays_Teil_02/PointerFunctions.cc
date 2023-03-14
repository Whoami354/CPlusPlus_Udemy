#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//int* input_array <=> int input_array[]
int array_max(int* input_array, unsigned int length) {
    int max = input_array[0];
    for (int i = 1; i < length; i++)
    {
        if(max < input_array[i]){
            max = input_array[i];
        }
    }
    return max;
}

int main(){

    unsigned int array_size = 10;

    //Heap Allocation
    int* p = new int [array_size];


    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < array_size; i++)
    {
        cout << p[i] << endl;
    }
    cout << "Max value: " << array_max(p,array_size) << endl;

    //Heap De-Allocation
    delete[] p;


    int a[5] = {4,5,6,7,8};
    cout << array_max(a,5) << endl;
    
    return 0;
}