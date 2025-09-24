#include <stdio.h>

int majorityElement(int arr[], int n) {
    // code here
    // int times=0;
        
}

int main() {
    printf("run");
    int arr[5] = {3,1,3,3,2};
    int n = 5;

    int pointArray[] = {};
    
    if (n == 1) {
        return arr[0];
    }
        
    for (int i=0; i < n; i++) {
        printf("%d",arr[i]);
        pointArray[arr[i]]++;
    }
    

    for (int i=0; i < n; i++) {
        printf("cout");
        if (pointArray[i] > n/2) {
            printf("%d",i);
            return i;
        }
            
    } 
}

