#include <iostream>
using namespace std;

void changeArray(int arr[] , int size){

    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
        // cout << "arr[" << i << "] = " << arr[i] << endl;
        cout << arr[i] << " ";
    }
    // cout << endl;
}

int main() {
    int size = 4;
    int arr[size] = {2, 4, 6, 8};

    cout << "Elements of array before changeArray function: " << endl;

    for (int i = 0; i < size; i++){
        // cout << "arr[" << i << "] = " << arr[i] << endl;
        cout << arr[i] << " ";
    }
    // cout << endl;

    cout << "\n------------------\n";

    cout << "Elements of array in changeArray: " << endl; 
    changeArray(arr , size); 

    cout << "\n------------------\n";

    cout << "Elements of arrayafter changeArray function: " << endl;

    for (int i = 0; i < size; i++){
        // cout << "arr[" << i << "] = " << arr[i] << endl;
        cout << arr[i] << " ";
    }
    // cout << endl;
    
    cout << "\n------------------\n";
    
    return 0;
}
