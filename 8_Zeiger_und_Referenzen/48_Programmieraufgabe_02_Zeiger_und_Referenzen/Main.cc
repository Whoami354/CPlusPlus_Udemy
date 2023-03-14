#include <iostream>
#include "Exercise.h"

using std::cout;
using std::endl;
using std::cin;

// In eurem Programm bitte:
// your_main zu main ändern
int main()
{   
    double sum2;
	// Aufgabe 1
    unsigned int size = 100;
    double* sum = new double[size];
    
    for (unsigned int i = 0; i < size; i++)
    {
        sum[i] = i;
    }

    sum2 = array_sum(sum ,size);

    cout << "(Exercise 1) Array Sum = " << sum2 << endl;

	// Aufgabe 2
	unsigned int input_array_length;
    int input_array_value;

	cout <<  endl<< "Gebe Array Length ein!" << endl;
	cin >> input_array_length;
	cout << endl << "Gebe Array Wert ein!" << endl;
	cin >> input_array_value;

	int *p_array_exercise2 = array_constructor(input_array_value, input_array_length);

	for (int i = 0; i < input_array_length; i++)
	{
		cout << p_array_exercise2[i] << endl;
	}

	return 0;
}