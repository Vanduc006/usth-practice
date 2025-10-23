#include <stdio.h>

int recursive(int number, int size) {  
    if (number == 0) {
        return size;
    }
    return recursive(number / 10, size + 1);
}

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

int main() {

    int arr[100];
    int result[100];
    int num = 56;
    num2Arr(arr, num, size(num));

    // print(arr, num);
    // printf("%d", arr2Num(arr, num));

    int sum = num + arr2Num(arr, num, size(num));
    
    num2Arr(result, sum, size(sum));

    int size = 0;
    
    printf("%d is \n", sum);
    if ( result[0] == result[recursive(sum, size)-1]) { // Using recursive to get Size
        printf("palindromic");
    }
    else {
        printf("not palindromic");   
    }

    // int size = 0;
    // printf("%d", recursive(num, size));

    
}