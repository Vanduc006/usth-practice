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
    int maxx = *p;
    for (int m = 0; m < n; m++) {
        if (*(p+m) > maxx) {
            maxx = *(p+m);
        }
    }
    printf("%d",maxx);

}