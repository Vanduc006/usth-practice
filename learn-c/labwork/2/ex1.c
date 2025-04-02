#include <stdio.h>
int main() {
    float temp_c;
    float temp_f = temp_c*(9/5)+32;
    printf("Type temperature at C type :");
    scanf("%d",&temp_c);
    printf("From temperature at C type we have %d at F type",temp_f);
    return 0;
}