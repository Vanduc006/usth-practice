#include <stdio.h>
int main() {
    int x = 1;
    float y = 2;
    char z = 'A';
    char m;
    printf("Hello USTH \n");
    printf("%d %f %c\n",x,y,z);
    printf("Type some words :");
    scanf("%c",&m);
    printf("%c \n",m);
    printf("\n");
    printf("\v");
    printf("\t");
    printf("\b");
    printf("\?");
    printf("\"");
    printf("\'");
    printf("\\");
    return 0;
}