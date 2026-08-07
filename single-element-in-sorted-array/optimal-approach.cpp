#include <iostream>
#include <vector>
using namespace std;

int singleElementInSortedArray (vector <int>& arr) {
    int n = arr.size();
    int st = 0 , end = n - 1;

    if (n == 1) return arr[0]; // only element in array
 
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (mid == 0 && arr[mid] != arr[mid + 1]) return arr[mid];
        if (mid == n-1 && arr[mid] != arr[mid - 1]) return arr[mid];

        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]) return arr[mid]; // single element found at mid

        if(mid % 2 == 0) { // no of elelments in each half is even
            if (arr[mid] == arr[mid - 1]) { // single element is in left half
                end = mid - 1;
            } else { // single element is in right half
                st = mid + 1;
            }
        } else { // no of elelments in each half is odd
            if (arr[mid] == arr[mid - 1]) { // single element is in right half
                st = mid + 1;
            } else { // single element is in left half
                end = mid - 1;
            }
        }

    }

    return -1; // single element not found
}

int main (){

    /*Single Element In a Sorted Array*/
    // LeetCode 540 - Binary Search O(log n)

    vector <int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    cout << "Single element in sorted array is: " << singleElementInSortedArray(arr) << endl; // output 2

    return 0;
}
