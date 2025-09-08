#include <stdio.h>
int main() {
    int n = 0;
    int target = 9;
    int nums[] = {2,7,11,15};
    int output[2];
    int length = sizeof(nums) / sizeof(nums[0]);
    // printf("%d",length);
    int a,b ;
    int sum;
    for (int i = 0; i < length; i++) {
        if ( i % 2) {
            // printf("%d",nums[i]);
            a = nums[i];
        }
        else {
            b = nums[i];
        }
        sum = a + b;
        if (sum == 9) {
            // printf("true");
            output[n] = 0;
            n = n + 1;
        }
        else {
            output[n] = 1;
        }
    };
    for ( int m = 0; m < 2; m++) {
        printf("%d",output[m]);
    }




    return 0;
}