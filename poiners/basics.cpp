#include <iostream>
using namespace std;

int main() {
    /*Pointer Basics*/
    // Pointer: Special vadriables that store address of other variables
    
    int a = 307;

    int* ptr = &a; // pointer => store address of variable a

    int** parPtr = &ptr; // pointer to pointer which will store address of ptr

    cout << "a = " << a << endl; // 307
    cout << "Pointer (ptr) = " << ptr << endl; // address of a
    cout << "Address of a = " << &a << endl; // address of a
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Pointer to pointer (parPtr) = " << parPtr << endl;
    cout << "Address of parPtr = " << &parPtr << endl;

    return 0;
}
