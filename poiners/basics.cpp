#include <iostream>
using namespace std;

int main() {
    /*Pointer Basics*/
    // Pointer: Special vadriables that store address of other variables
    
    int a = 307;

    int* ptr = &a; // pointer => store address of variable a

    int** parPtr = &ptr; // pointer to pointer which will store address of ptr

    int* nullPtr = NULL;  // null pointer store noting 0x0

    cout << "a = " << a << endl; // 307

    cout << "\nPointer (ptr) = " << ptr << endl; // address of a
    cout << "Address of a = " << &a << endl; // address of a

    cout << "\nAddress of ptr = " << &ptr << endl;
    cout << "Pointer to pointer (parPtr) = " << parPtr << endl; // pointer to pointer

    cout << "\nAddress of parPtr = " << &parPtr << endl;

    cout << "\nNull pointer = " << nullPtr << endl;

    return 0;
}
