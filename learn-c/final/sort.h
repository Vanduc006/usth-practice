#include <stdio.h>

void selection_sort( float array[], long n) {
    int i, j, position;
    float temp;
    for ( i=0; i < (n-1); i++) {
        position = i ;
        for ( j= i+1; j < n; j++) {
            if (array[position] > array[j]) {
                position = j;
            }
        }
        if ( position != i) {
            temp = array[i];
            array[i] = array[position];
            array[position] = temp;

        }
    }
    // return array[]
}

void bubble_sort(float array[], long n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i -1; j++) {
            // printf("%f",array[j]);
            if ( array[j] > array[j + 1]) {
                float temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(float array[], long n){
    int i,j, flag=0;
    float temp;
    for (i = 1 ; i <= n - 1; i++) {
        temp = array[i];
        for (j = i - 1 ; j >= 0; j--) {
            if (array[j] > temp) {
                array[j+1] = array[j];
                flag = 1;
            }
            else break;
        }
        if (flag) {
            array[j+1] = temp;
        }
    }
}

