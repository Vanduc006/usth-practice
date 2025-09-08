#include <stdio.h>
#include "gcd.h"
int main() {
    int a,b;
    printf("Type a :");
    scanf("%d",&a);
    printf("Type b :");
    scanf("%d",&b);
    printf("%d",gcd(a,b));
    return 0;

}