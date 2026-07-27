#include <iostream>

using namespace std;

void changeA(int* ptr) { // using pointer as parameter
    *ptr = 330; // Change the value of 'a' using pointer
}

void changeAAlias(int &b){ // using reference as parameter
    b = 313; // Change the value of 'a; using alais => alternative name for 'a'
}

int main() {
    
/*Pass by Reference*/
    // Pass by reference is a method of passing arguments to a function by passing the address of the variable

    /*using pointer*/

    cout << " ====== Pass by Reference ====== " << endl;

    int a = 307;

    cout << "Orignal value of 'a': " << a << endl; // 307

    cout << "Using pointer: " << endl;

    changeA(&a); // Pass the address of 'a' to the function

    cout << "Value of 'a' after changeA function: " << a << endl; // 330  

    cout << "Using alias: " << endl;

    changeAAlias(a); // Pass the variable 'a' to the function

    cout << "Value of 'a' after changeAAlias function: " << a << endl; // 313

    return 0;
}
