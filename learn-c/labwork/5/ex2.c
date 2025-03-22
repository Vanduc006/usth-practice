#include <stdio.h>
#include "dynamic.h"
// int arr[] = {1,2,3,4,5,6,7,8};
int size = 8;
int odd;
int even;
int sum(int arr[]) {
    for ( int i = 0; i < size; i++) {
        if ( arr[i] % 2 == 0 ) {
            even = even + arr[i];
        }
        else {
            odd = odd + arr[i];
        }
    }
}

int main() {
    int dynamicArr[8];
    dynamic(dynamicArr,size);
    sum(dynamicArr);
    printf("sum odd numbers in arr %d\n",odd);
    printf("sum even numbers in arr %d\n",even);
}