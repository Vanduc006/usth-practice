#include <stdio.h>
int gcd(int a,int b) {
    int gcd = 1;
    for (int i; i <= a; i++) {
        if ((a%i==0) && (b%i==0)) {
            gcd = i;
        }
    }
    return(gcd);
}

// int gcd2(int a,int b,int c,int d) {
//     int gcd = 1;
//     for (int i; i <= a; i++) {
//         if ((a%i==0) && (b%i==0) && (c%i==0) && (d%i==0)) {
//             gcd = i;
//         }
//     }
//     return(gcd);
// }