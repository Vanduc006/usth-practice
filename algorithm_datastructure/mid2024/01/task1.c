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

int main() {
        int arr[] = {1,2,3,4,5};
        sort(arr,5);

        for (int i=0; i < 5; i++) {
                for(int j=i+1; j < 5; j++) {
                        for(int k=j+1; k < 5; k++) {
                                if (isPythagorean(arr[i],arr[j],arr[k]) == 1) {
                                        printf("(%d, %d, %d) is a Pythagorean triple\n", arr[i], arr[j], arr[k]);
                                }
                                else {
                                        printf("(%d, %d, %d) is not a Pythagorean triple\n", arr[i], arr[j], arr[k]);
                                        
                                }
                        }
                }
        }
}
/*  Outer loop run n times
        Middle loop run n times
        Inner loop run n times
        -> O(n^3)
*/

// O(n^2) + O(1) + O(n^3) = O(n^3)