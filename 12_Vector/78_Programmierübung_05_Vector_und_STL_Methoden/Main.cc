#include <iostream>
#include <vector>
#include <algorithm>

#include "Exercise.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::fill;
using std::sort;

int main()
{
	// Aufgabe 1
	Matrix matrix(3, vector<double>(3, 0.0));

	for (int i = 0; i != matrix.size(); ++i)
	{
		for (int j = 0; j != matrix[i].size(); ++j)
		{
			matrix[i][j] = i + j;
			cout << endl << "i = " << i << " , j = " << j << ", matrix = " << matrix[i][j];
		}

		cout << endl;
	}

	// Aufgabe 2
	vector <double> row_max_vec = max_row_values(matrix);

	// Aufgabe 3
	double max = sort_and_max(row_max_vec);

	cout << endl;
	for (int i = 0; i != row_max_vec.size(); ++i)
	{
		cout << "Maximum of row " << i << endl << row_max_vec[i];
	}

	cout << endl;
	cout << endl << "Max: " << max;

	cin.get();
	getchar();
	return 0;
}