#include <iostream>
#include <vector>

using namespace std;

int singleElement(vector <int> nums) {
    int n = nums.size();

    if(n == 1){
        return nums[0];
    }

    for (int i = 0; i < n; i++){
       // 1. Check the first element boundary 
        if(i == 0 && nums[i] != nums[i+1]){
            return nums[i];
        }

        // 2. Check the last element boundary
        if(i == n - 1 && nums[i] != nums[i-1]){
            return nums[i];
        }

        // 3. Check the middle elements
         if(i > 0 && i < n - 1 && nums[i-1] != nums[i] && nums[i] != nums[i+1]){
            return nums[i];
        }
    }
    return -1;
}

int main() {
    /*Single Element in a Sorted Array*/
    // LeetCode 540 - Linear Search O(n)

    vector <int> nums = {1,1,2,3,3,4,4,8,8};
    cout << singleElement(nums) << endl; // output 2

    return 0;
}