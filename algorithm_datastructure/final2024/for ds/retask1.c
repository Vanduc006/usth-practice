#include <stdio.h>

int getSize(int number) {
    int size = 0;
    while (number > 0)
    {
        size++;
        number = number / 10;
    }
    return size;
}

int num2Array(int number, int arr[], int size) {
    int n = 0;
    while (n < size)
    {
        arr[n] = number % 10;
        number = number / 10;
        n++;
    }
}

int arr2Num(int arr[], int size) {
    int number = 0;
    for (int i=size-1; i >= 0; i--) {
        number = number * 10;
        number = number + arr[i];
    }
    return number;
}

int main() {
    int arr[100];
    int number = 51029;

    num2Array(number, arr, getSize(number));
    printf("%d \n", arr2Num(arr, getSize(number)));

    // arr2Num

    int minn = arr[0];
    int minnIndex = 0;
    for (int i=0; i < getSize(number)-1; i++) {
        if (arr[i] < minn) {
            if (arr[i] > 0) {
                // printf("%d", i);
                minn = arr[i]; // 1
                minnIndex = i;
            }
        }
    }
    printf("%d \n", minnIndex);

    int temp = arr[0];
    arr[minnIndex] = arr[0];
    arr[0] = temp;

    printf("%d", arr2Num(arr, getSize(number)));




}