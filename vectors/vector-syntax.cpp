#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vecotrs -> data stacture like array -> dynamic in nature (not dixed size) 

    /*different syntax of vectors*/

    vector <int> vec1;  // size = 0
    vector <int> vec2 = {1, 2, 3}; // size = 3
    vector <int> vec3(3, 2); // 3 -> size of vector , 2 -> value stored at index
    vector <char> vec4 = {'k', 'a', 'l', 's', 'o', 'o', 'm'};

   for (int value : vec2){ // for each loop (will print 1 2 3)
    cout << value << " ";
   }
   cout << endl;

   for (char value : vec4){ // will print k a l s o o m
    cout << value << " ";
   }
   cout << endl;

}
