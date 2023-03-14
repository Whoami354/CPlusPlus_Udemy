#include <iostream>
#include <vector>

int main()
{   
    const unsigned int num_rows = 3;
    const unsigned int num_cols = 2;


    //2D array
    int array[num_rows][num_cols] = {{0,1},
                                    {2,3},
                                    {4,5}};

    //2d vector (3x2 matrix => 3 rows, 2 columns)
    std::vector<std::vector<int>> my_vector(num_rows,std::vector<int>(num_cols,0));

    for (int i = 0; i < my_vector.size(); i++)
    {   
        //my_vector[i] => row vector with 2 int values
        for (int j = 0; j < my_vector[i].size(); j++)
        {
            my_vector[i][j] = i * j + i + j;
        }    
    }
    
    
    for (int i = 0; i < my_vector.size(); i++)
    {   
        //my_vector[i] => row vector with 2 int values
        for (int j = 0; j < my_vector[i].size(); j++)
        {
            std::cout << "my_vector[" << i << ", " << j << "] = " << my_vector[i][j] << std::endl;
        }    
    }
    

	return 0;
}