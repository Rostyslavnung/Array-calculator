#include <iostream> 

#include "Size.h"

void conditionalFunc(int A[size], int C[size], int isOdd = 0) {
    for (int i = 0; i < size; i++) {
        if (C[i] % 2 != 0) {
            isOdd++;
        }

        if (isOdd >= 2) {
            C[i] = (A[i] / 2);
        }
    }
    if (isOdd < 2) {
        std::cout << "There is no odd elements, or count of them is less than 2.\n";
    }
}