#include <stdio.h>


int main() {
    int array[100];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
    int *p;
    p = array;
    int even[100];
    int odd[100];
    int even_idx = 0 ; int odd_idx = 0;
    for (int m = 0; m < n; m++) {
        if ( *(p+m) % 2 == 0) {
            even[even_idx++] = *(p+m);
        }
        odd[odd_idx++] = *(p+m);
    }
    printf("even \n");
    for (int m = 0; m < even_idx; m++) {
        printf("%d",even[m]);
    }
    printf("\n");
    printf("odd \n");
    for (int m = 0; m < odd_idx; m++) {
        printf("%d",odd[m]);
    }

}