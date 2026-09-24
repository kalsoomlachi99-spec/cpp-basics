#include <iostream>
#include <cstring>
using namespace std;

void line () {
    cout << "---------------------" << endl;
}

int main() {
    
    /*CString or Character Array*/

    char str1[] = "Hello!"; // string literals - literals: constant value
    char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'}; // '\0' is called a NULL character. size of \0 is 1byte, and is count as single character

    cout << "Str1 = " << str1 << endl;
    cout << "Str1[0] = " << str1[0] << endl;
    line();

    cout << "Str2 = " << str2 << endl;
    cout << "Size of str2 = " << strlen(str2) << endl;
    line();

    /*Input & Output*/ 

    char str3[11];

    cout << "Enter character array : " ;
    // cin >> str3; will input only a single word without space
    cin.getline(str3, 11);

    // cout << "Output : " << str3 << endl; // method 1

    for(char val: str3){ // method 2
        cout << val << " ";
    }
    cout << endl;

    line();

    return 0;
}
