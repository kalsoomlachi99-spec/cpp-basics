#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Majority elements  

    vector <int> nums = {1, 2, 1, 2, 1};
    int n = nums.size();

    for (int val : nums){
        int freq = 0;
        for (int el : nums){
            if (el == val){
                freq++;
            }
        }

        if (freq > n/2){
            cout << val;
            return val;
        }
    }
    
    return 0;
}
