#include <iostream>
using namespace std;
 
int main() {
    // KADANE'S ALGORITHM - most optimized approch

    cout << "\n ===== KADANE'S ALGORITHM ===== \n" << endl;

    cout << "Kadane's Algorithm:- Ignore negative sum." << endl; 
    cout << "Only positive sum will be added to maximum sum." << endl;

    cout << "\n------------------------" << endl;

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = size(arr);

    int maxSum = INT_MIN , currentSum = 0;

    for (int i = 0; i < n; i++){

        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0){ // kadane's algorithm
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    cout << "------------------------" << endl;

    return 0;
}
