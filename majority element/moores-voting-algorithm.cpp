#include <iostream>
#include <vector>
using namespace std;

int main() {

    //Moore's Voting Algorithm

    vector <int> nums = {1, 2, 2, 1, 1};

    int n = nums.size();
    int freq = 0, ans = 0;

    cout << "===== MOORE'S VOTING ALGORITHM ===== " << endl;

    cout << "Most optimized approach for majority element. " << endl;
    cout << "Time Complexity: O(n)" << endl;

    for (int i = 0; i < n; i ++){
        if (freq == 0){
            ans = nums[i];
        } 
        if (ans = nums[i]){ // moore's voting algorithm
            freq ++;
        } else {
            freq --;
        }
    }

    int count = 0;
    for (int val : nums){
        if (val == ans){
            count ++;
        }
    }
    if (count > n/2){
        cout << "Majority Element: " << ans <<endl ;
    } else {
        cout << "No Majority Element" << endl;
    }
    

    return 0;
}
