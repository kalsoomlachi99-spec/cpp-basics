#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    /*CString or Character Array*/

    char str1[] = "Hello!"; // string literals - literals: constant value
    char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'}; // '\0' is called a NULL character. size of \0 is 1byte, and is count as single character

    cout << "Str1[1] = " << str1[1] << endl;

    cout << "Str2 = " << str2 << endl;
    cout << "Size of str2 = " << strlen(str2) << endl;

    return 0;
}
