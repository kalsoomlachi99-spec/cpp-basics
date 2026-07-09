#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> nums, int target){
    vector <int> ans;
    int n = nums.size() - 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    // Two Sum (pair sum) - Brute Force Approach
    
    vector <int> nums = {3, 2, 4} ;
    int target = 6;

    vector <int> ans = pairSum(nums, target);

    cout << "The numbers in the array are: ";
    for (int i : nums) {    
        cout << i << " ";
    } 
    cout << endl;   

    cout << "The indices of the two numbers that add up to " << target << " are: ";

    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
