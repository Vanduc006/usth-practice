// [Array][Binary]


// Find the duplicate element in a limited range array

// Given a limited range array of size n containing elements between 1 and n-1 with one element repeating, 
// find the duplicate number in it without using any extra space.

// For example,
// Input:  { 1, 2, 3, 4, 4 }
// Output: The duplicate element is 4    
// Input:  { 1, 2, 3, 4, 2 }
// Output: The duplicate element is 2 

#include <stdio.h>

int main() {
    int nums[] = { 2 , 2, 3, 4, 4 };
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 0;
    for (int i=0; i < n-1; i++) {
        for (int j=i+1; j < n; j++) {
            // printf("%2d %2d",nums[i],nums[j]);
            if (nums[i] == nums[j]) {
                // k++;
                printf("Duplicate element %d \n",nums[i]);
            }
        }
    }
    // printf("%d",k);
}