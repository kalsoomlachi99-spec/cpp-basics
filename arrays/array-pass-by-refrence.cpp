#include <iostream>
using namespace std;

void changeArray(int arr[] , int size){

    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

void line (){
    cout << "------------------\n";
} 
int main() {

    // Pass by refrence in arrays

    int size = 4;
    int arr[size] = {2, 4, 6, 8};

    cout << "Elements of array before function: " << endl;

    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    line();

    cout << "Elements of array in function: " << endl; 
    changeArray(arr , size); 

    line();

    cout << "Elements of array after function: " << endl;

    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    line();
    
    return 0;
}
