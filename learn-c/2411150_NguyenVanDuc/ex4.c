#include <stdio.h>
#include "gcd.h"
int main() {
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d",gcd(num1,num2));
    return 0;   
}