
#include <iostream>
using namespace std;

void uniqueElements(int arr[], int size){  // -> not correct still need workt6y

    int ans[size];

    for (int i = 0; i < size; i++){
        bool isUnique = true;
        for (int j = 0; j < size; j++){
            if (i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if (isUnique){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {

    // Print all the unique values in an array

    int arr[] = {1, 2, 3, 3, 2, 1, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << " ===== Unique Value ===== " << endl;

    uniqueElements(arr, size);

    return 0;
}
