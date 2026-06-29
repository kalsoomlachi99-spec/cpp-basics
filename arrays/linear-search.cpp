#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

void input(int arr[], int size){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    } 
}

void output(int arr[] , int size){
    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }  
}

void line(){
    cout << "\n-----------------------\n";
}

int main() {

    // Finding out the target element using linear search algorithm in array

    const int MAX_SIZE = 100;
    int size, target;
    int arr[MAX_SIZE];

    cout << "\n====== Linear Search ======\n" << endl ;

    cout << "Enter size of array." << endl;
    cout << "Size: ";
    cin >> size;
    
    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid array size!";
        return 0;
    }

    cout << "Enter integer elements of array: "; 
    input(arr, size);

    cout << "Enter target element." << endl;
    cout << "Target: ";
    cin >> target;

    line();

    int index = linearSearch(arr, size, target);
    
    if (index == -1){
    cout << target << " not found in the array.";
    } else{
        cout << target << " found at index " << index;
    }

    line();
    
    return 0;
}
