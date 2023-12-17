#include <iostream> 
#include "Header.h"

#include "Size.h"


int main() {

    int A[size];
    int C[size];
    int isOdd = 0;
    fillA(A);
    fillC(A, C);
    print_Array(A);
    conditionalFunc(A, C, isOdd);
    print_Array(C);

    return 0;
}