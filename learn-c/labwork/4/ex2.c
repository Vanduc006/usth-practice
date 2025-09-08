#include <stdio.h>
#include "gcd.h"
int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int gcd1 = gcd(a,b);
    int gcd2 = gcd(c,d);
    int greatest = gcd(gcd1,gcd2);
    printf("Output : %d",greatest);
    return 0;
}