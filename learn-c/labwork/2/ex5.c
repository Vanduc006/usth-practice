#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int a,b,c,d,e,f;
    printf("Type value for a :");scanf("%d",&a);
    printf("Type value for b :");scanf("%d",&b);
    printf("Type value for c :");scanf("%d",&c);
    printf("Type value for d :");scanf("%d",&d);
    printf("Type value for e :");scanf("%d",&e);
    printf("Type value for f :");scanf("%d",&f);
    system("cls");
    printf("%dx + %dy = %d\n",a,b,c);
    printf("%dx + %dy = %d",d,e,f);
    return 0;

}