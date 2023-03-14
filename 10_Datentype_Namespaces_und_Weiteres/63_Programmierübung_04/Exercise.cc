#include <iostream>
#include "Exercise.h"

using std::cout;
using std::endl;
using std::cin;

namespace computation
{
	// Aufgabe 1
	double mean_array_value(int *array, const unsigned int &length){
        double sum_mean_int_array = 0.0;
        for (int i = 0; i < length; i++)
        {
            sum_mean_int_array += array[i];
        }
        return sum_mean_int_array/length;
    }

	double mean_array_value(double *array, const unsigned int &length){
        double sum_mean_double_array = 0.0;
        for (int i = 0; i < length; i++){
            sum_mean_double_array += array[i];
        }
        return sum_mean_double_array / length;
    }

	
}