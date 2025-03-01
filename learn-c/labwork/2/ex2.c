#include <stdio.h>

int main() {
    int maxx;
    int min;
    int a = 0; int b = 2; int c = 3;
    maxx = a;
    min = a;
    if ( b > maxx ) {
        maxx = b;
    }
    if ( b < min ) {
        min = b;
    }
    if ( c > maxx ) {
        maxx = c;
    }
    if ( c < min ) {
        min = c;
    }
    printf("max %d min %d",maxx,min);
    
}