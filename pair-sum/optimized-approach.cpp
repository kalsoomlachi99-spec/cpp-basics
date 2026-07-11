#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> nums , int target){
    int st = 0;
    int end = nums.size() - 1;
    vector <int> ans;

    while (st < end){

        int pSum = nums[st] + nums[end] > target;
        if(nums[st] + nums[end] > target){
            end --;
        } else if (nums[st] + nums[end] < target ){
            st ++;
        } else {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main() {

    //Two Sum -> Optimized brute force approach

    vector <int> nums = {2, 7, 11, 15};
    int target = 7;
    
    vector <int> ans = pairSum(nums , target);
    cout << nums[0] << " , " << nums[1] << endl;
    
    return 0;
}
