#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Container with most water -> Brute Force Approach

    vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int n = height.size();
    int maxWater = 0; // ans

    for (int left = 0; left < n; left ++){

        for (int right = left + 1; right < n; right ++){
            
            int w = right - left; // width of container
            int ht = min(height[left] , height[right]); // height of container
            int currentWater = w * ht;
            maxWater = max (currentWater, maxWater);
        }
    }

    cout << maxWater;
    return 0;
}
