#include <iostream>
using namespace std;

int main() {

    // loops in array 
    /*taking an array's element as input and print these elements as output*/

    int arr[4];

    cout << "Enter integer elements of array (size = 5): ";

    for (int i = 0; i <= 4; i++){
        cin >> arr[i];
    }
    cout << "Elements of array: " << endl;
    for (int i = 0; i <= 4; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }     

    return 0;
}
