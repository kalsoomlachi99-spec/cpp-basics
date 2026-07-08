#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2){
    int inter1 , inter2;

    for (int i = 0; i < size1; i++){
        inter1 = arr1[i];

        for (int j = 0; j < size2; j++){
            inter2 = arr2[j];

            if(inter1 == inter2){
            cout << inter1 << " ";
            break;
            }
        }
    }
}

int main() {
   
    int arr1[] = {2, 4, 8, 3, 5};
    int arr2[] = {1, 8, 4, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << " ===== Point of Intersection of Two Arrays ===== " << endl;

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

    cout << "point of intersection of these two arrays is: ";
    intersection(arr1, arr2 , size1, size2);

    return 0;
}
