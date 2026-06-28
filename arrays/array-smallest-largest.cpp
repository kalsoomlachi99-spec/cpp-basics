#include <iostream>
using namespace std;

int main() {

    // Find out the smallest and largest value in the given array

    int num[] = {23, -4, 12, 5, 7};
    int size = sizeof(num) / sizeof(int); // size of array
    int smallest = INT_MAX; // largest possible value
    int largest = INT_MIN; // smallest possible value

    for (int i=0; i < size; i++){  // finding smallest method 1
        if (num[i] < smallest){
            smallest = num[i];
        }
    }

    for (int i=0; i < size; i++){  // finding smallest method 2 (using min function)
        smallest = min(num[i] , smallest);
    }

    for (int i=0; i < size; i++){  // finding largest method 1
        if (num[i] > largest){
            largest = num[i];
        }
    }

    for (int i=0; i < size; i++){  // finding largest method 2 (using max function)
        largest = max(num[i] , largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;


    return 0;
}
