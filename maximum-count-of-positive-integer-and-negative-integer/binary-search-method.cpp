#include <iostream>
#include <vector>

using namespace std;

// Find first index where element >= target
 int lowerBound(vector <int>& nums, int target){
    int start = 0, end = nums.size() - 1, result = 0;
   
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] >= target){ 
            result = mid;
            end = mid - 1; // Look on the right side
        } else {  
            start = mid + 1; // Look on the right side
        }
    }

    return result;
}

int maximumCount(vector<int>& nums){
    int neg = lowerBound(nums, 0);  // Number of negative integer
    int pos = nums.size() - lowerBound(nums, 1); // Number of positive integer

    return max(neg, pos);
}

int main() {

    /*Maximum Count of Positive Integer and Negative Integer*/
    // Binary Search Method
    
    vector <int> nums = {-3, -2, -1, 5, 6, 12, 23};

    cout << maximumCount(nums) << endl; // Output

    return 0;
}
