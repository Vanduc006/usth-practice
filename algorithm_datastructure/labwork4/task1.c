#include <stdio.h>
#define MAX 10000

int main() {
    int num = 12345;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("sum of all digits = %d",sum);
}
//  O(log(n))

// condition num > 0
// each iteration num decrease 1 digit
// log(n)+1
// K+1

