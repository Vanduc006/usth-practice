#include <stdio.h>
#define MAX 10000

int main() {
    double n = 0.47;
    int k = 4;
    int intergalIndex = 0;

    int intergalPart[MAX];
    while (k > 0) {
        intergalPart[intergalIndex] = k % 2;
        k = k / 2;
        intergalIndex++;
    } // O(log(n))

    for(int i=intergalIndex - 1; i >= 0; i--) {
        printf("%d",intergalPart[i]);
    } // O(n)

    printf(".");

    int fractionalPart[MAX];
    int fractionalIndex = 0;
    
    k = 4;
    while (k > 0) {
        n = n * 2;
        int bit = (int)n;
        fractionalPart[fractionalIndex] = bit;
        n = n - bit; // remove bit keep only fractiona part
        // 0.47 * 2 = 0.94 -> bit = 0
        // 0.94 * 2 = 1.88 -> bit = 1
        k--;
        fractionalIndex++;
    } // O(log(n))

    for(int i=0; i < fractionalIndex; i++) {
        printf("%d",fractionalPart[i]);
    } // O(n)
}

// O(n)