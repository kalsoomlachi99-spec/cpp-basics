#include <iostream>

using namespace std;

void line(){
    cout << "-------------------" << endl;
}

int main() {
    /* String isn't a data type it is a class which we include through string header file and create objects of this class.*/

    string str1 = "Kalsoom"; // contigous and dynamic => runtime resize
    string str2 = "Manal";

    string str3 = str1 + str2; // concatenation

    cout << str3 << endl;
    line();

    cout << (str1 == str2) << endl; // comaparsion
    cout << (str1 < str2) << endl; 

    cout << "Length of str1 = " << str1.length() << endl; // lenght
    line();

    // Input and Output

    string str4;
    // cin >> str4; // ingnore input after white spaces
    getline(cin, str4); // delimiter
    cout << "Output: " << str4 << endl;
    line();

    // Loops on string

    string str5 = {"Hello World!"};

    for (int i = 0; i < str5.length() - 1; i++) { // for loop
        cout << str5[i] << " ";
    }
    cout << endl;
    line();

    return 0;
}
