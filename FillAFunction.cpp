#include <iostream> 
#include <ctime> 

#include "Size.h"

void fillA(int array[size]) {
    std::srand(time(0));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }
}