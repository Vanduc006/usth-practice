// Complete this given function void findMax(int *max, int a), which assigns a value
// a to max if a > max.
#include <stdio.h>
void findMax(int *max, int a) {
    if ( a > *max) {
        *max = a;
    }
    // return *max;
}

int main() {
    int currentMax = 100;
    int a;
    scanf("%d",&a);
    findMax(&currentMax, a); // affect value
    printf("%d", currentMax);
}