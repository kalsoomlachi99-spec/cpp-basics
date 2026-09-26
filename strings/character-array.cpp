#include <iostream>
#include <cstring>
using namespace std;

void line () {
    cout << "---------------------" << endl;
}

int main() {
    
    /*CString or Character Array*/

    char chArr1[] = "Hello!"; // string literals - literals: constant value
    char chArr2[] = {'W', 'o', 'r', 'l', 'd', '\0'}; // '\0' is called a NULL character. size of \0 is 1byte, and is count as single character

    cout << "chArr1 = " << chArr1 << endl;
    cout << "chArr1[0] = " << chArr1[0] << endl;
    line();

    cout << "chArr2 = " << chArr2 << endl;
    line();

    /*Input & Output*/ 

    char chArr3[11];

    cout << "Enter character array : " ;
    // cin >> chArr3; will input only a single word without space
    cin.getline(chArr3, 11);

    // cout << "Output : " << str3 << endl; // method 1

    for(char val: chArr3){ // method 2
        cout << val << " ";
    }
    cout << endl;

    line();

    // calculate length 

    char chArr4[] = {'m', 'a', 'n', 'a', 'l'};
    int len = 0;

    cout << "Length of chArr4 method 1 = " << strlen(chArr4) << endl; 

    for (int i = 0; i < chArr4[i] != '\0'; i++) {
        cout << chArr4[i] << " " << len << endl;
        len ++;
    }
    cout << "Length of chArr4 method 2 = " << len << endl;
    line();

    return 0;
}
