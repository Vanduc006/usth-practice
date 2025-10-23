#include <stdio.h>
#define MAX 100

int indexMax(int arr[], int size, int iteration) {
    int maxx = arr[0];
    int index = 0;
    for (int i=0; i < size; i++) {
        if (arr[i] > maxx && i < size - iteration) {
            index = i;
            maxx = arr[i];
        } 
    }
    return index;
}

int printArr(int arr[], int size) {
    for(int i=0; i < size; i++) {
        printf("%3d \n", arr[i]);
    }
}

int flipArr(int *arr, int size, int interation) {
    for (int i=0; i < size/2; i++) {
        if ( i >= interation) {

        }

        else {
            int temp = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = temp;
        }     
    }
}

int main() {
    int iteration = 1;
    int arr[] = {1,10,2,12,50,3,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size;
    int maxx = arr[0];
    // printf("%d \n",indexMax(arr, size));

    // flipArr(arr, size);
    // printArr(arr, size);
    // for (int i=0; i < size; i++) {
    //     printf("Iteration %d \n",i);
        
    // }
    while (n > 0) {
        printf("iteration %d \n", iteration)
        flipArr(arr, size, iteration);
        int temp = arr[size-iteration];
        arr[size-iteration] = arr[indexMax(arr, size, iteration)];
        arr[indexMax(arr, size, iteration)] = temp;
        printArr(arr, size);

        iteration++;
        n--;
    }

    // int temp = arr[size-iteration];
    // arr[size-iteration] = arr[indexMax(arr, size, iteration)];
    // arr[indexMax(arr, size, iteration)] = temp;
    

}