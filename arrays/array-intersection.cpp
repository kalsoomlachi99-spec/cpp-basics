#include <iostream>
using namespace std;

void unique(int arr1[], int arr2[], int size){
    int inter1 , inter2;
    for (int i = 0; i < size; i++){
        inter1 = arr1[i];
        inter2 = arr2[i];
        if(inter1 == inter2){
            cout << "inter: " << inter1;
            break;
        }
    } 
}

int main() {
    
    int size = 5;

    int arr1[size] = {2, 4, 8, 3, 5};
    int arr2[size] = {1, 4, 7, 4, 9};

    unique(arr1, arr2 , size);

    return 0;
}
