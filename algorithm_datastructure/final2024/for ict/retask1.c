#include <stdio.h>

int reverse(int number)
{
    int n = 0;
    while (number > 0)
    {
        n = n + (number % 10);
        if (number > 10)
        {
            n = n * 10;
        }
        number = number / 10;
    }
    return n;
}


int getLast(int number) {
    // if (number )
    return number % 10; // 121 % 10 = 1
}

int recursive(int number) {
    if (number < 10)
    {
        return number;
    }
    return recursive(number % 10); // 121 % 100 = 1
}


int main()
{
    int number = 605;
    printf("%d", reverse(number));

    int sum = number + reverse(number); // 121

    if (getLast(sum) == recursive(reverse(sum))) {
        printf("ok");
    }
    else {
        printf("not");
    }

    
}