#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    /*CString or Character Array*/

    char str[] = {'m', 'a', 'n', 'a', 'l', '\0'}; // '\0' is called a NULL character. size of \0 is 1byte, and is count as single character

    cout << "str = " << str << endl;
    cout << "size of str = " << strlen(str) << endl;

    return 0;
}
