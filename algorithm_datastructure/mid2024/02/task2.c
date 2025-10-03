#include <stdio.h>
#define MAX 1000

void intergalPart(int k) {
    if (k == 0) {
        return;
    }
    intergalPart(k / 2);
    printf("%d", k % 2);
}
// O(log(n))

void fractionalPart(double n, int qoutient) {
    if (qoutient == 0) {
        return;
    }
    n = n * 2;
    int bit = (int)n;
    printf("%d",bit);
    fractionalPart(n - bit, qoutient-1);
}
// O(n)

int main () {
    double n = 0.47;
    int k = 4;

    intergalPart(k);
    printf(".");
    fractionalPart(n,k);

}