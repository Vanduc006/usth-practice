#include <stdio.h>

int main() {
    int a,b ;
    // int nums[];
    printf("nhap so a : ");
    scanf("%d",&a);
    printf("\n");
    printf("nhap so b : ");
    scanf("%d",&b);
    printf("\n");
    if ( a > b) {
        printf("sort numbers by %d, %d",a,b);

    }
    else {
        printf("sort numbers by %d %d",b,a);
    }
}