#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> nums, int target){
    int i = 0, j = nums.size() - 1;
    vector <int> ans;
    while (i < j){
        if(i == j){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    
    }
    return ans;
}

int main() {
    // pair sum - optimezed brute force approch
    
    vector <int> nums = {2, 7, 11, 15} ;
    int target = 9;

    pairSum(nums, target);

    return 0;
}
