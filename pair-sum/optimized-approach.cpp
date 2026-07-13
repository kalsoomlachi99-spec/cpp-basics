#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> nums , int target){  // O(n)
    vector <int> ans;

    int i = 0;
    int j = nums.size() - 1;

    while (i < j){

        int pSum = nums[i] + nums[j];
        if(pSum > target){
            j --;
        } else if (pSum < target ){
            i ++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {

    //Two Sum -> Optimized Brute Force Approach

    vector <int> nums = {2, 7, 11, 15};
    int target = 26;
    vector <int> ans = pairSum(nums , target);
    
    cout << "The numbers in the array are: ";
    for (int i : nums) {    
        cout << i << " ";
    } 
    cout << endl;  
    
    cout << "Target: " << target << endl;

    cout << "The indices of the two numbers that add up to " << target << " are: ";
    cout << ans[0] << " , " << ans[1] << endl;
    
    return 0;
}
