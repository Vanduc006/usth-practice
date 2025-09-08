#include <stdio.h>

int main() {
    int x, i;
    printf("Type \n");
    scanf("%d",&x);
    for(i = 1; i <= x; i++) {
        if((x%i) == 0){
            printf("\n%d", i);
            printf("\n");
        }
    }
}