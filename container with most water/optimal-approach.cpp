#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Container with most water -> Optimal approach (two pointer approach)

    vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << " ===== Container With Most Water ===== " << endl;
    cout << "Optimal Approach (Two Pointer Approach) :" << endl;

    int lp = 0, rp = height.size() - 1; // left and right pointers
    int maxWater = 0;

    while (lp < rp){

        int w = rp - lp; // width of container
        int ht = min (height[lp] , height[rp]); // height of container
        int currentWater = w * ht;

        maxWater = max(currentWater , maxWater);

        height[lp] < height[rp] ? lp ++ : rp --;

    }

    cout << "Container with most water is: " << maxWater << endl;
    
    return 0;
}
