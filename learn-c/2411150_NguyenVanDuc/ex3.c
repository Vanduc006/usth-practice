#include <stdio.h>
int factor(int n) {
    if ( n <= 0 ) {
        return 1;
    }
    return n*factor(n-1);

}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",factor(n));
    return 0;
}