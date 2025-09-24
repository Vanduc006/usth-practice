
// Find maximum length subarray having a given sum

// Given an integer array, find the maximum length subarray having a given sum.

// For example, consider the following array:
// nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }
// target = 8     
// Subarrays with sum 8 are   { -5, 5, 3, 5 } { 3, 5 } { 5, 3 }   
// The longest subarray is { -5, 5, 3, 5 } having length 4 


#include <stdio.h>
int findSub(int arr[], int size, int target) {
    int sublenght = 0;
    int found = 1;
    for (int i=0; i < size; i++) {
        int sum=0;
        for (int j=i; j < size; j++) {
            sum += arr[j];
            printf("sum %d \n",sum);
            if (sum == 8) {
                // found = 1;
                printf("Found");
            }
        }
    }
}

int main() {
    int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int maxxlenght[100] = {};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 8;
    findSub(nums, size, target);
    // sum = 8

    
}

// #include<iostream>
// #include<set>
// #include<map>
// #include<algorithm>
// #include<iomanip>
// using namespace std;
// #define ll long long
// int main(){
//     int n , target; cin >> n >> target;
//     int nums[n];
//     for(int i = 0;i < n;i++) cin >> nums[i];
    
//     int max_length = 0;
//     int prefix_sum = 0;
//     map<int,int>mp;
//     for(int i = 0;i < n;i++){
//         prefix_sum += nums[i];
//         if(prefix_sum == target) max_length = max(i + 1, max_length);
//         if(mp.find(prefix_sum - target) != mp.end()) max_length = max(i - mp[prefix_sum - target] ,max_length);
//         if(mp.find(prefix_sum) == mp.end()) mp[prefix_sum - target] = i;
//     }
//     cout << max_length << endl;
// }

//sum(0 , j) + sum(i , j) = sum(0 , i)
//sum(0 , j) + k = sum(0 , i)
//==> sum(0 , i) - sum(0 , j) = k