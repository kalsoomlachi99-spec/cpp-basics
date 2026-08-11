#include <iostream>
#include <vector>
using namespace std;

int main() {
    // single number problem
    
    vector <int> nums = {1, 3, 5, 3, 1};

    int ans;

    for (int value : nums){
        ans ^= value;  // ^(XOR) will cancel out same numbers as {(n ^ 0 = n) & (n ^ n = 0)}
    }

    cout << "Single (unique) number is: " << ans << endl;

    return 0;
}
