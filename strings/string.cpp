#include <iostream>

using namespace std;

int main() {
    /* String isn't a data type it is a class which we include through string header file and create objects of this class.*/

    string str1 = "Kalsoom"; // contigous and dynamic => runtime resize
    string str2 = "Manal";

    string str3 = str1 + str2; // concatenation

    cout << str3 << endl;

    return 0;
}
