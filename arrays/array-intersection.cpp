#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2){
    bool visited[size2] = {false};

    for (int i = 0; i < size1; i++){

        for (int j = 0; j < size2; j++){

            if(arr1[i] == arr2[j] && !visited[j]){
            cout << arr1[i] << " ";
            visited[j] = true;
            break;
            }
        }
    }
}

int main() {
   
    //Intersection of Two Arrays (Brute Force Approach)

    int arr1[] = {2, 2, 2, 4,};
    int arr2[] = {2, 2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << " ===== Intersection of Two Arrays ===== " << endl;

    cout << "first array is: ";
    for (int i = 0; i < size1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "second array is: ";
    for (int i = 0; i < size2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Intersection is: ";
    intersection(arr1, arr2 , size1, size2);

    return 0;
}
