#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector <int> nums, int target){ 
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (target > nums[mid]){
            start = mid + 1;
        } else if (target < nums[mid]){
            end = mid - 1;
        } else {
           return mid;
        }
    }
    return -1;
}

int main() {
    
    /*Binary Search*/

    // Iterative method

    vector <int> nums1 = {-1, 0, 3, 4, 5, 9, 12}; // odd
    int target1 = 14;

    vector <int> nums2 = {-1, 0, 3, 5, 9, 12}; // even
    int target2 = 5;

    int result1 = binarySearch(nums1, target1);
    cout << "Index of target1 element: " << result1 << endl;

    int result2 = binarySearch(nums2, target2);
    cout << "Index of target2 element: " << result2 << endl;

    return 0;
}
