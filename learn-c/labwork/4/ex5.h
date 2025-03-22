#include <stdio.h>
#include <math.h>
int problem5_normal(int x,int y) {
    for (int i = 0; i < y; i++ ) {
        x = x*(y-1);
    }
    return x;
}
int problem5_ex(int x,int y) {
    if (y > 0 ) {
        return x*problem5_ex(x,y - 1);
    }
    else {
        return 1;
    }
    
}