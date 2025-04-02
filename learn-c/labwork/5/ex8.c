#include <stdio.h>
#include <string.h>
int main() {
    char str[1000] = "xin chao toi la hihihi";
    char letter;
    int len;
    int j;
    printf("Type letter you want to remove :");
    scanf("%c",&letter);
    len = strlen(str);
    for ( int i = 0; i < len; i++) {
        if ( str[i] == letter ) {
            for (j = i; j < len - 1; j++) {
                str[j] =  str[j + 1];
                
            }
            str[j] = ' ';
            len--;
            i--;
        }
        printf("%s\n",str);
    }
    
    
}