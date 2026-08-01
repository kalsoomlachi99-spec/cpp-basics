#include <iostream>
#include <vector>

using namespace std;

int recBinarySearch(vector <int> nums, int target, int start, int end){
    if(start <= end){
        int mid = start + (end - start) / 2;
        if(target > nums[mid]){
            return recBinarySearch(nums, target, mid + 1, end);
        } else if(target < nums[mid]){
            return recBinarySearch(nums, target, start, mid - 1);
        } else {
            return mid;
        }
    }
    return - 1;
}

int main() {
    /*Binary Search*/
    //Recursive Method : Time Complexity => O(logn) , Space Complexity O(logn)

    vector <int> nums = {-1, 0, 3, 5, 12};
    int target = 12;
    int start = 0, end = nums.size()-1;

    cout << recBinarySearch(nums, target, start, end) << endl;
    
    return 0;
}
