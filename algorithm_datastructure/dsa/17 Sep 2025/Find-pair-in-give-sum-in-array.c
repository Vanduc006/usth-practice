// [Array],[Sorting]
// Input:   nums = [8, 7, 2, 5, 3, 1] target = 10  
// Output:   Pair found (8, 2) or Pair found (7, 3)    
// Input:   nums = [5, 2, 6, 8, 1, 9] target = 12  
// Output: Pair not found 

#include <stdio.h>
int main() {
    int nums[6] = {8,7,2,5,3,1};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 10;
    for (int i=0; i < size-1; i++) {
        for(int j=i+1; j < size; j++) {
            // printf("%2d %2d",nums[i],nums[j]);
            if (nums[i] + nums[j] == 10) {
                printf("Pair found (%2d, %2d) \n",nums[i],nums[j]);
            } 
        }
    }

}