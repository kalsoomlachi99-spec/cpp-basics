#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vecotrs -> data stacture like array -> dynamic in nature (not dixed size)

    vector <int> vec1;  // size = 0
    vector <int> vec2 = {1, 2, 3}; // size = 3
    vector <int> vec3(3, 2); // 3 -> size of vector , 2 -> value stored at index

   for (int value : vec2){
    cout << value << endl;
   }

    return 0;
}
