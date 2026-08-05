#include <iostream>
#include <vector>

using namespace std;

 int maximumCount(vector<int>& nums) {
    int pos = 0, neg = 0;
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            pos ++;
        } else if(nums[i] < 0){
            neg ++;
        }
    }
    return max(pos, neg);
}

int main() {
    /*Maximum Count of Positive Integer and Negative Integer*/
    // Iterative Method

    vector<int> nums = {-3,-2,-1,0,0,1,2};

    cout << maximumCount(nums) << endl;

    return 0;
}
