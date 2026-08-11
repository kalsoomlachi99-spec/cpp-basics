#include <iostream>
using namespace std;

void input(int arr[], int size){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    } 
}

int arraySum(int arr[] , int size){
    int sum = 0;

    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int arrayProduct(int arr[], int size){
    int product = 1;

    for (int i = 0; i < size; i++){
        product *= arr[i];
    }
    return product;
}

void line(){
    cout << "--------------------" ;
}
int main() {
    // Sum of all numbers in an array

    const int MAX_SIZE = 100;
    int size = MAX_SIZE;
    int arr[MAX_SIZE];

    cout << "\n===== Sum and Product of an Array =====\n" << endl;

    cout << "Enter size of an array: " << endl;
    cin >> size;

    if (size <= 0 || size > MAX_SIZE){
        cout << "Invalid array size!" << endl;
        return 0;
    }
    
    cout << "Enter integer elements of an array: " << endl;

    input(arr , size);

    line();

    cout << "\n===== Sum of Array =====\n" << endl;

    cout << "Sum of all numbers of an array is : " ;
    cout << arraySum(arr , size) << endl;
    
    line();

    cout << "\n===== Product of Array =====\n" << endl;

    cout << "Product of all numbers of an array is: ";
    cout << arrayProduct(arr , size) << endl;

    line();

    return 0;
}
