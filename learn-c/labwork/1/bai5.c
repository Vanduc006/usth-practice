#include <stdio.h>
int main() {
    int x;
    int polynomial;
    int a = 1;int b = 2;int c = 1;
    printf("Input value for x :");
    scanf("%d",&x);
    polynomial = a*x*x + b*x + c;
    printf("The polymial ax^2 + bx + c = %d",polynomial);
    return 0;

}