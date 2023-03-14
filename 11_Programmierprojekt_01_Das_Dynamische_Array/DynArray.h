#pragma once

#include <cstddef>

/**
 * @brief DynamicArray Structure
 * 
 * @param int* m_data
 * @param std::size_t m_length
 */
struct DynamicArray{
    double* m_data;
    std::size_t m_length;
};

/**
 * @brief Create a dynamic array object
 * 
 * @param value the fill value for the array
 * @param length  The lenght of the array
 * @return DynamicArray
 */
DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

/**
 * @brief Push back the Value at the end of the vector
 * 
 * @param dynamic_array the dynamic array.
 * @param value The value to append to the array
 */
void push_back(DynamicArray &dynamic_array, const int &value);

/**
 * @brief Pop back the Value at the end of the vector
 * 
 * @param dynamic_array the dynamic array.
 * @param size the size of the array
 */
void pop_back(DynamicArray &dynamic_array);
