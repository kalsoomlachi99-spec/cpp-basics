#include <iostream>
using namespace std;

int linearSearch(int arr[] , int target, int size){
    for (int i = 0; i <= size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

void input(int arr[], int size){
    for (int i = 0; i <= size; i++){
        cin >> arr[i];
    } 
}

int main() {

    // Finding out the target element using linear search algorithm in arrays

    int size , target , arr[size];

    cout << "Enter size of array." << endl;
    cout << "Size: ";
    cin >> size;

    cout << "Enter integer elements of array: "; 
    input(arr, size);

    cout << "Enter target element." << endl;
    cout << "Traget: ";
    cin >> target;

    cout << "Index of " << target << " is : " << linearSearch(arr , target , size) << endl;
    
    return 0;
}
