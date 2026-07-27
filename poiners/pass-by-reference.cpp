#include <iostream>

using namespace std;

void changeA(int* ptr) {
    *ptr = 500; // Change the value of a using pointer
}

int main() {
    
/*Pass by Reference*/
    // Pass by reference is a method of passing arguments to a function by passing the address of the variable
/*using pointer*/
    cout << " ====== Pass by Reference using pointer ====== " << endl;

    int a = 307;

    cout << "Value of 'a' before changeA function: " << a << endl; // 307

    changeA(&a); // Pass the address of a to the function

    cout << "Value of 'a' after changeA function: " << a << endl; // 500  

    return 0;
}
