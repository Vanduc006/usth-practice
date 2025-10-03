// different approach

#include <stdio.h>
#define MAX 10000

int sum(int num) {
    if (num == 0) { // int so value 0.0?? = 0
        return 0;
    }
    else {
        return (num % 10) + sum(num / 10);
    }
}

int main() {
    int num = 12345;
    printf("%d", sum(num));
}

// Olog(n)
// k times