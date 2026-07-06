#include <iostream>
using namespace std;

int main() {
    // pair sum - optimezed brute force approch

    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int st = 0, end = size(arr) - 1;
    int sum;

    while (st < end){
        sum = arr[st] + arr[end];

        if (sum > target){
            end --;
        } else if (sum < target){
            st ++;
        }  else if (sum = target){
           cout << "Pair Sum: (" << arr[st] << " , " << arr[end] << ") " << endl;
           break;
        }
    }

        // cout << arr[st] << " , " << arr[end] << endl;
    return 0;
}
