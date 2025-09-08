#include <stdio.h>
int main() {
    int year;
    printf("Type the year :");
    scanf("%d",&year);
    if ( year % 100 == 0) {
        if ( year % 400 == 0) {
            printf("%d is a leap year",year);
        }
        else {
            printf("%d is not a leap year",year);
        }
    }
    else {
        printf("%d is not a leap year",year);
    }
    return 0;
}