#include <stdio.h>

int isPrime(int num) {
    if ( num < 2 ) {
        return 0;
    }
    for (int i=2; i*i<=num; i++) {
        if ((num % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int x;
    printf("Type");
    scanf("%d",&x);
    if ( x <= 1 ) {
        return 1;
    }
    for ( int i=2; i <= x; i++) {
        if (isPrime(i)) {
            printf("%4d",i);
        }
    }



}