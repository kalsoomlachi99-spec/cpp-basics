#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // Majority Element -> Optimized Brute Force Approach

    vector <int> nums = {1, 2, 1, 2, 1};
    int n = nums.size();

    // step 1: sorting

    sort(nums.begin() , nums.end());

    // step 2: frequency count

    int freq = 1;
    int ans = nums[0];

    for (int i = 0; i < n; i++){
        if(nums[i] == nums[i - 1]){
            freq ++;
        } else {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2){
            return ans;
        }
    }

    return ans;

}
