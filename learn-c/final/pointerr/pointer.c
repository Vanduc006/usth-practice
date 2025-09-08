#include <stdio.h>


int main() {
    int array[100];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
    int reverse[100];
    int *p;
    p = array;

    for (int j = 0; j < n; j++) {
        // int position = n - j;
        // *(p + n - j) = reverse[j];
        reverse[j] = *(p + n - 1 - j); 
        // printf("%d",*(p+j));
    }

    // another way 
    // int *start = array;
    // int *end = array + n - 1;
    // while (start < end) {
    //     int tmp = *start;
    //     *start = *end;
    //     *end = tmp;
    //     start++;
    //     end--;
    // }

    for (int m = 0; m < n; m++) {
        printf("%d",reverse[m]);
    }
}