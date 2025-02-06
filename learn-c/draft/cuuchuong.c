#include <stdio.h>
int main() {
    int maxx = 10;
    for (int a = 0; a < maxx; a++) {
        for (int b = 0; b < maxx; b++) {
            printf("%d x %2d = %2d\n",a,b,a*b);
            
        }
        printf("\n");
    }
    
}