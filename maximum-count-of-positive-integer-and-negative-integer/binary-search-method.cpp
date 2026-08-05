#include <iostream>
#include <vector>

using namespace std;

 int binarySearch(vector <int>& nums, int target){
    int start = 0, end = nums.size() - 1, result = 0;
   
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] > target){ 
            end = mid - 1;
        } else if (nums[mid] < target){
            start = mid + 1;
        } else {
            result = mid;
            end = mid - 1;
        }
    }

    return result;
}

int maximumCount(vector<int>& nums){
    int neg = binarySearch(nums, 0);
    int pos = nums.size() - binarySearch(nums, 1);
    return max(neg, pos);
}

int main() {

    /*Maximum Count of Positive Integer and Negative Integer*/
    // Binary Search Method
    
    vector <int> nums = {-3,-2,-1,1,6,12,23};

    int neg = binarySearch(nums, 0); // 3
    int pos = nums.size() - binarySearch(nums, 1);

    int result = max(neg, pos);
    cout << result << endl;

    return 0;
}
