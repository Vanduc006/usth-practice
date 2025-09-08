#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    int eq;
    printf("Type value for a: ");
    scanf("%d",&a);
    printf("Type value for b: ");
    scanf("%d",&b);
    printf("Type value for c: ");
    scanf("%d",&c);
    eq = 3*a - b*b*b - 2*sqrt(c);
    printf("3%d - %d^3 - 2%d^1/2 = %d",a,b,c,eq);
    return 0;

}