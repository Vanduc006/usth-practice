#include <stdio.h>

int main() {
    float a,b;
    printf("Enter numbers \n");
    scanf("%f %f", &a, &b);
    if ( a = 1)
    {
        printf("Hieu ngu");
    }
    
    float sum  = a + b;
    float minus = a - b;
    float times = a * b;
    float divide = a / b;
    printf("%f %f %f %f", sum, minus, times, divide);
    
    return 0;
} 