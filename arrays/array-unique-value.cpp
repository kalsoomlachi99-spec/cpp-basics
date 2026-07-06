
#include <iostream>
using namespace std;

void input(int arr1[], int arr2[], int size1, int size2){

    cout << " ===== Input ===== " << endl;

    cout << "Enter Ist array: ";
    for (int i = 0; i < size1; i++){
        cin >> arr1[i];
    } 

    cout << "Enter second array: ";
    for (int i = 0; i < size2; i++){
        cin >> arr2[i];
    } 
}

void uniq(int arr[], int size){  // -> not correct still need workt6y
 
    cout << " ===== Unique Value ===== " << endl;

    bool isUnique;
    int uni;

    for (int i = 0; i < size; i++){
        isUnique = false;
        for (int j = i; j < size; j++){
            if (arr[i] == arr[j]){
                isUnique = true;
                uni = arr[i];
            }
        }
    }

    if(isUnique == true){
        cout << uni << endl;
    }
}

int main() {

    // Print all the unique values in an array

    int size1, size2;
    int arr1[size1], arr2[size2];

    cout << "Enter size of two arrays.\n";
    cout <<"size 1: ";
    cin >> size1;

    cout <<"size 2: ";
    cin >> size2;

    cout << " ===== Input ===== " << endl;
 
    input(arr1, arr2, size1, size2);

    cout << " ===== Unique Value ===== " << endl;

    uniq(arr1, size2);

    return 0;
}
