#include <stdio.h>

int size(int num) {
    // int k = num;
    int n = 0;
    while (num > 0) {
        n += 1;
        num /= 10;
    }
    return n;
}

int num2Arr(int arr[], int number, int size) {
    // int n = size(num);
    int n = 0;
    while (n <= size) {
        arr[n] = number % 10;
        number = number / 10;
        n++;
    }
}

int arr2Num(int arr[], int num, int size) {
    int number = 0;
    for (int i=0; i < size; i++) {
        number = number * 10;
        number += arr[i];
    }
    return number;
}


int swap(int arr[],int num,int size, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    return arr2Num(arr, num, size);
}

int mix(int arr[], int number, int size) {
    int minn = number;
    for (int i=0; i < size; i++) {
        for (int j=i+1; j < size; j++) {
            int guess = swap(arr, number, size, i, j);
            printf("%d \n", guess);
            if (guess < minn) {
                minn = guess;
            }
        }
    }
    return minn;
}


int main() {
    int input[100];
    int num = 51029;

    num2Arr(input, num, size(num));
    printf("%d", mix(input, num, size(num)));
}