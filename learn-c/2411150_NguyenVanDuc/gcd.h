// #include <stdio.h>
#include <stdio.h>

int gcd(int a,int b) {
    int gcd;
    gcd = 1;
    for (int i = 1; i <= a; i++) {
        if ((a%i==0) && (b%i==0)) {
            gcd = i;
        }
    }
    return(gcd);

    
}
