#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0, end = size -1;

    while (start < end){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }

}

int main() {

    const int MAX_SIZE = 100;
    int size, target;
    int arr[MAX_SIZE];
    
    return 0;
}