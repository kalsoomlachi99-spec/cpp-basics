#include <iostream>
using namespace std;

void input(int arr[], int size){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    } 
}

void line(){
    cout << "-----------------------" << endl;
}   

int maximum(int arr[], int size){
    int maxi = INT_MIN;

    cout << "===== Indices =====" << endl;

    for (int i = 0; i < size; i++){
        maxi = max(maxi, arr[i]);
    }

    for (int i = 0; i < size; i++){
        if(arr[i] == maxi){
            cout << "maximum number index: " << i << endl;
        }
    }

    return maxi;
}

int minimum(int arr[], int size){
    int mini = INT_MAX;
    int i;

    for (i = 0; i < size; i++){
        mini = min(mini, arr[i]);
    }
    
    for (int i = 0; i < size; i++){
        if(arr[i] == mini){
            cout << "minimum number index: " << i << endl;
        }
    }

    line();
   
    return mini;
}

int main() {

    // Swap the maximun and minimum numbers of an array

    const int MAX_SIZE = 100;
    int size = MAX_SIZE;
    int arr[MAX_SIZE];

    cout << "\n===== Swap of Maximum and Minimum =====\n" << endl;

    cout << "Enter size of an array: " ;
    cin >> size;

    if (size <= 0 || size > MAX_SIZE){
        cout << "Invalid array size!";
        return 0;
    }
    
    cout << "Enter integer elements of an array: " ;
    input(arr , size);
    line();

    int max = maximum(arr , size);
    int min = minimum(arr, size);

    cout << "===== Before Swap =====\n";
    
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    line();

    swap(max , min);

    cout << "===== After Swap =====" << endl;

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    
    line();
    
    return 0;
}
