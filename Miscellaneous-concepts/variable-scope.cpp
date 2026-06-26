#include <iostream>
using namespace std; 

float e = 2.17; // global -> out side a function

void fun () { // local -> inside a function
    int y;
    cout << "inside fun function: y = " << y << endl; 
    cout << "inside fun function: e = " << e << endl;
}

int main() {
    //  VARIABLE SCOPE 

    /*  there are two types of variable scope : 
    1. local scope -> can be access in specific block. [if-else, loop, function, block of code({---})]
    2. global scope -> can be access from any where in the file [out side the fuction]*/ 

    int x = 10; // local -> inside a function
    cout << "inside main function: x = " << x << endl;
    cout << "inside main function: e = " << e << endl;

    fun();

    if (x > 3){
        int z = 1; // local -> inside if
        cout << "inside if-else: z = " << z << endl;
        cout << "inside if-else: e = " << e << endl;
    }

    for (int i = 0 ; i <= 1 ; i++){ // local -> inside loop
        cout << "inside loop: z = " << i << endl;
        cout << "inside loop: e = " << e << endl;        
    }

    {
        int n = 4; // local -> block of code
        cout << "inside block code: n = " << n << endl;
        cout << "inside block code: e = " << e << endl;
    }

    return 0;
}
