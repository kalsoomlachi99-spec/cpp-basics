#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector <int>& arr){
    int start = 1, end = arr.size() - 2;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        } 
    }

    return -1;
}

int main() {
    
    /*Peak Index In Mountain Array*/
    //Leetcode 852

    vector <int> arr = {0, 3, 8, 9, 5, 2};

    cout << "Peak index in mountain array is: " << peakIndexInMountainArray(arr) << endl;

    return 0;
}