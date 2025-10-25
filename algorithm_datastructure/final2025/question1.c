#include <stdio.h>

// Check if number is even
// Time complexity O(1)
int isEven(int number) { 
    return number % 2 == 0;
}

// Implement with recursive 
// Time complexity is Olog(n). Each time number decrese 1, and a*a
int recursion(int number, int a) {
    if (number == 0) {
        return 1;
    }

    if (isEven(number) && number > 0) {
        return recursion(number-1, a*a);
    }

    // else {
    //     return 
    // }

    return a;
}

int main() {
    int a = 4;
    int number = 2;

    printf("%d",recursion(number,a));

}