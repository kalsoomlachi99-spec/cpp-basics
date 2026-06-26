#include <iostream>
using namespace std;

int main() {
    // DATA TYPE MODIFIER

    /* *long* , *long long* ,  *short* ,*signed* , *unsigned* (commonly used with int data type)*/

    cout << "size of int: " << sizeof(int) << " bytes" << endl ; // 4 bytes
    
    cout << "size of long : " << sizeof(long ) << " bytes" << endl ; // 4 bytes
    
    cout << "size of long long : " << sizeof(long long ) << " bytes"  << endl ; // 8 bytes
    
    cout << "size of short : " << sizeof(short ) << " bytes"  << endl ; // 2 bytes
    
    cout << "size of signed : " << sizeof(signed ) << " bytes"  << endl ; // 4 bytes
    
    cout << "size of unsigned : " << sizeof(unsigned ) << " bytes"  << endl ; // 4 bytes
    
    cout << "size of char: " << sizeof(char) << " bytes" << endl ; // 1 byte
    
    cout << "size of bool: " << sizeof(bool) << " bytes" << endl ; // 1 byte
    
    cout << "size of double: " << sizeof(double) << " bytes" << endl ; // 8 bytes

    cout << "size of long double: " << sizeof(long double) << " bytes" << endl ; // 16 bytes
    
    cout << "size of float: " << sizeof(float) << " bytes" << endl ; // 4 bytes
    
    
    cout << "size of string: " << sizeof(string) << " bytes" << endl ; // 32 bytes

    return 0;
}