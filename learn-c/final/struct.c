#include <stdio.h>
#include <stdlib.h>
struct pai {
    int a;
    int b;
    // int tmp;
};

int main() {
    int n;
    scanf("%d",&n);
    // pai[n+1];
    struct pai* pai = malloc((n + 1) * sizeof(struct pai));

    for ( int i = 0; i <=n ; i++) {
        scanf("%d",&pai[i].a);
        pai[i].b = i;
    }

    //sort
    // int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (pai[i].a > pai[j].a ) {
                int tmp = pai[j].a;
                pai[j].a = pai[i].a;
                pai[i].a = tmp;
            }
        }
    }
    for (int i = 1; i < n; i++ ) {
        printf("%d %d \n", pai[i].a, pai[i].b);
    }

}