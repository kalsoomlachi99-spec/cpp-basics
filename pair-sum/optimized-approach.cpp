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

    //Two Sum -> Optimized brute force approach

    vector <int> nums = {2, 7, 11, 15};
    int target = 26;
    
    vector <int> ans = pairSum(nums , target);
    cout << ans[0] << " , " << ans[1] << endl;
    
    return 0;
}
