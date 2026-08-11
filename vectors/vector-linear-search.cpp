#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Linear Search in Vector

    cout << " ===== Linear Search ===== " << endl;

    vector <int> nums ={1, 2, 3, 4, 5};
    int target = 3;

    for (int value : nums){
        if (value == target){
            cout << "Target: " << value << endl;
            break;
        }
    }
    return 0;
}
