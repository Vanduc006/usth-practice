#include <stdio.h>
#include "sort.h"

void printArray(float array[], int size) {
    for ( int i = 0; i < size; i++) {
        printf("%f ",array[i]);
    }
}

// n is sizxe
int main() {
    float array[] = {10,9,1,5,6,8};
    long n = 6;
    // selection_sort(array, n);
    // bubble_sort(array, n);
    insertion_sort(array,n);
    printArray(array, n);
    
    // int a = selection_sort(array,n);
    // printf()
    
}

