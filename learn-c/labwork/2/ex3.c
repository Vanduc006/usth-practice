#include <stdio.h>
int main() {
    int a,b;
    // should change to scanf
    a = 1;
    b = 2;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d,b = %d",a,b);
    return 0;
}