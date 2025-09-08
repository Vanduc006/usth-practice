#include <stdio.h>


int main() {
    // int array[100][100];
    int n;
    int ans = 0;
    scanf("%d",&n); 
    int arr[n][n]

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    int (*p)[n] = array;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // scanf("%d", &array[i][j])
            ans = ans + *(*( p+i) +j);
        }
        // printf("\n");
    }
    printf("%d",ans);
}