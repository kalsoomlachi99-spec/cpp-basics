#include <iostream>
using namespace std;

int main (){
    /*Derefrencing Operator (*) */
    // tell about value store at that address

    int a = 307;
    int* ptr = &a;
    int** parPtr = &ptr;

    cout << " ====== Dereference Operator (*) ====== " << endl; 

    cout << "a = " << a << endl; // 307

    cout << "*(&a) : " << *(&a) << endl; // 307 

    cout << "*(ptr) : " << *(ptr) << endl; // 307 
    
    cout << "*(&ptr) : " << *(&ptr) << endl; // address of a
    
    cout << "*(parPtr) : " << *(parPtr) << endl; // value of ptr (address of a)

    return 0;
}
