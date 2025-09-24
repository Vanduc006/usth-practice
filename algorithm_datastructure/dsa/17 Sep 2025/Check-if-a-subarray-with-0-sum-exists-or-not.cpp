// [Array]

// Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }  
// Output: Subarray with zero-sum exists   
// The subarrays with a sum of 0 are:   
// { 3, 4, -7 } 
// { 4, -7, 3 } 
// { -7, 3, 1, 3 } 
// { 3, 1, -4 } 
// { 3, 1, 3, 1, -4, -2, -2 } 
// { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 

// impliment with C++
// use g++ to compile

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void findZeroSumArray(int nums[],int n) {
    // create empty of set to store the sum of elements of each sub-array
    // nums[0 -> i] where 0 <= i <= n
    unordered_map<int, 
    vector<int>> sumMap;
    int sum = 0;
    bool found = false;

    sumMap[0].push_back(-1);
    for (int i=0; i < n;i++) {
        sum += nums[i];
        if (sumMap.find(sum) != sumMap.end()) {
            for(auto startIndex : sumMap[sum]) {
                found = true;
                cout << "{";
                for(int j=startIndex+1; j <= i;j++) {
                    cout << nums[j] << (j < i ? ", " : "");
                }
                cout << " }" << endl;
            } 
        }
        sumMap[sum].push_back(i);
        if (!found) {
            cout << "No sub-zero \n";
        }
    }
    
    
}
int main() {
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums) / sizeof(nums[0]);
    findZeroSumArray(nums, n);
    // hasZeroSumArray(nums, n) ?
    //     cout << "exists" :
    //     cout << "Not exists";

    return 0;
}