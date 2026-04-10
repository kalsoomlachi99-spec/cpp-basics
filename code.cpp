#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = {'a','b','c' ,'\0'};
    cout << str << endl << strlen(str) << endl;

    char arr[] = "hello";
    cout << arr << endl << strlen(arr) ;  

    return 0;
}