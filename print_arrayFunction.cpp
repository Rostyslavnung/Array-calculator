#include <iostream> 

#include "Size.h"

void print_Array(int array[size]) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
}