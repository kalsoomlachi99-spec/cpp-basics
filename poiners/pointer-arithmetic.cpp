#include <iostream>

using namespace std;

void line() {
    cout << "--------------------" << endl;
}

int main() {
    
    /* Pointer Arithmetic */
    
        /* Increment(++) / Decrement(--)
           Add / Subtract Number
           Subtract Ptr
           Compare Ptr (<, <=, >, >=, ==, !=)*/

    cout << " ==== Pointer Arithmetic ====" << endl;     

    int a = 307;

    int* ptr = &a;

    cout << "Orignal value of ptr: " <<  ptr << endl;

    line();

    cout << "Increment (++) :- " << endl;

    ptr ++; // Increment the pointer to point to the next memory location in that case 4 bytes (size of int)

    cout << "ptr ++: " << ptr << endl; // orignal + size of int

    line();

    cout << "Decrement (--) :- " << endl;

    ptr --; // Decrement the pointer to point to the previous memory location in that case 4 bytes (size of int)

    cout << "ptr --: " << ptr << endl; // orignal - size of int

    line();

    cout << "Add Number (+) :- " << endl;

    cout << "ptr + 2: " << ptr + 2 << endl; // orignal + (size of int * 2)

    line();

    cout << "Subtract Number (-) :- " << endl;

    cout << "ptr - 2: " << ptr - 2 << endl; // orignal - (size of int * 2)

    line();

    cout << "Subtract Pointer (-) :- " << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[3];

    // Subtracting two pointers gives the number of elements between them, not the byte difference.
    // The result is in terms of the number of elements of the type the pointers point to.

    cout << "ptr2 - ptr1 : " << ptr2 - ptr1 << endl; // 2

    line();

    cout << "Compare Pointer (<, <=, >, >=, ==, !=) :- " << endl;

    cout << "ptr1 > ptr2 : " << (ptr1 > ptr2) << endl; // false (0)
    cout << "ptr1 < ptr2 : " << (ptr1 < ptr2) << endl; // true (1)
    cout << "ptr1 == ptr2 : " << (ptr1 == ptr2) << endl; // false (0)
    cout << "ptr1 != ptr2 : " << (ptr1 != ptr2) << endl; // true (1)

    line();

    return 0;
}
