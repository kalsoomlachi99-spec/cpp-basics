#include <iostrem>
#include <vector>
using namespace std;

int main (){
    /* Product of Array Except Self => better optimal approach */
    /* Time complexity o(n) 
     Space complexity o(1)*/

     // leetcode problem 238

    vector <int> nums = {1,2,3,4};

    int n = nums.size();
    vector <int> ans(n , 1);

    // Prefix product 

    for(int i = 1; i < n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    // Suffix product 

    int suffix = 1;

    for(int i = n-2; i >= 0; i--){
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    cout << "Product of Array Except Self is: " << endl;
    
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}
