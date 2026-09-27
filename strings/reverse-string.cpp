#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Reverse a String */
    
    string str = {"Hello World!"};

    reverse (str.begin(), str.end());
    
    cout << str << endl;
    
    return 0;
}
