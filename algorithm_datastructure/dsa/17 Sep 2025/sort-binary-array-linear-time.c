// [Array][Sorting]

// Sort binary array in linear time O(n)

// Given a binary array, sort it in linear time and constant space. The output should print all zeros, followed by all ones.

// For example,
// Input:  { 1, 0, 1, 0, 1, 0, 0, 1 }
//  Output: { 0, 0, 0, 0, 1, 1, 1, 1 } 


#include <stdio.h>
// #include <printIntArray.h>
int printIntArray(int arr[], int size) {
    for (int i=0; i < size; i++) {
        printf("%2d",arr[i]);
    }
}

int main() {
    int nums[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int countZero = 0;
    for (int i=0; i < n;i++) {
        if (nums[i] == 0) {
            countZero++;
        }
    }

    int k=0;
    while (countZero--) // 4 -> 0
    {
        nums[k++] = 0; // fill zero till counZero = 0, whick means number of 0 in array
    } 

    while (k < n) {
        nums[k++] = 1; // fill last space of array with 1
    }
    
    printIntArray(nums, n);
    return 0;

}