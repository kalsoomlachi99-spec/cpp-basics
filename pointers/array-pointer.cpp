#include <iostream>

using namespace std;

int main() {
    
    /*Array Pointer*/

    int arr[] = {1, 2, 3, 4, 5};

    cout << " ===== Array Pointer ===== " << endl;

    int a = 23;

    cout << "Address of arr[0] = " << &arr[0] << endl; // address of first element of array
    cout << "Address of arr[1] = " << &arr[1] << endl; // address of second element of array
    cout << "Address of arr[2] = " << &arr[2] << endl; // address of third element of array
    cout << "Address of arr[3] = " << &arr[3] << endl; // address of fourth element of array
    cout << "Address of arr[4] = " << &arr[4] << endl; // address of fifth element of array

    cout << "Address of arr = " << arr << endl; // address of first element
    
    return 0;
}
