#include <stdio.h>
#include <math.h>

int main() {
    // int arr[100];
    // int size;
    // scanf("%d",&size);
    // int arr[size][size];
    // for(int i=0; i < size;i++) {
    //     for(int j=0; j < size;j++) {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // // int transpose = determine(arr);

    // int (*p)[size] = arr;
    // // *(p + j)
    // // int transpose
    // for(int i=0; i < size; i++) {
    //     for(int j=0; j < size; j++) {
    //         int tmp;
    //         tmp = *(*( p+i) +j);
    //         arr[i][j] = tmp;
    //     }
    // }

    // for(int m=0; m < size;m++) {
    //     for(int n=0; n < size; n++) {
    //         printf("%d",arr[n][m]);
    //     }
    //     printf("\n");
    // }
    // int a[100];
    // int *p =a;
    // a[i]
    // *(p+i)

    int a = 10;
    int *p = &a;
    printf("%d",*p);

}