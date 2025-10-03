#include <stdio.h>
#define MAX 1000

int sort(int *arr,int size) {
    for (int i=0; i < size; i++) {
        for (int j=i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
/*  Outer loop run n times 
    Inner loop run n-i times
    -> O(n^2)
*/

int isPythagorean(int a,int b, int c) {
    if (a*a + b*b == c*c) {
        return 1;
    }
    else {
        return 0;
    }
}
/*  Constant operation
    -> O(1)
*/

int recursive(int arr[], int size, int start, int depth, int combo[3]) {
    if (depth == 3) {
        if (isPythagorean(combo[0], combo[1], combo[2])) {
            printf("(%d, %d, %d) is a Pythagorean triple\n", combo[0], combo[1], combo[2]);
        }
        else {
            printf("(%d, %d, %d) is not a Pythagorean triple\n", combo[0], combo[1], combo[2]);
        }
    }
    for (int i=start; i < size; i++) {
        combo[depth] = arr[i];
        recursive(arr, size, i+1, depth+1, combo);
    }
}


int main() {
    int arr[] = {1,2,3,4,5};
    int combo[3];
    sort(arr,5);
    recursive(arr, 5, 0, 0, combo);

}

// O(n^3)