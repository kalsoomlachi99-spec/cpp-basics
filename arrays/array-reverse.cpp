#include <iostream>
using namespace std;

void input(int arr[], int size){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    } 
}

void reverse(int arr[], int size){
    int start = 0, end = size -1;

    while (start < end){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }
    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }  
}

void line(){
    cout << "------------------\n";
}

int main() {

    //Reverse an array

    const int MAX_SIZE = 100;
    int size;
    int arr[MAX_SIZE];

    cout << "\n===== Rverse an Array =====\n" << endl;

    cout << "Enter size of array." << endl;
    cout << "Size: ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid array size!";
        return 0;
    }
    
    cout << "Enter integer elements of array: "; 
    input(arr, size);

    line();

    cout << "Reverse of the given array is : " << endl;

    reverse(arr, size);

    line();
    
    return 0;
}
