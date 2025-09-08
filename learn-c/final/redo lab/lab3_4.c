#include <stdio.h>

int main() {
    int n;
    int product = 1;
    scanf("%d",&n);
    while ( n > 0) {
        int digit = n % 10;
        product = product*digit;
        n = n / 10;
    }
    printf("%d",product);

}