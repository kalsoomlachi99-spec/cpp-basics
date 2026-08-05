#include <iostream>
using namespace std;

int main() {

    // OPERATOR PRECEDENCE

    int a = 7;

    cout << "first precedence: (a++) , (a--) = "<< (a++) << " , " << (a--) << endl ; // first precedence (unary operator : ++ , -- , !) [R to L]

    cout  << "second precedence: (3 / 4 * 2 % 1) = " << (3 / 4 * 2 % 1) << endl ; // second precedence (*, / , %) [L to R]
    
    cout  << "third precedence: (3 + 5 - 1) = " << (3 + 5 - 1) << endl ; // third precedence ( + , - ) + Bitwise Operator[L to R]
    
    cout  << "fourth precedence: (3 < 4 <= 7 > 6 >= 8) = " << (3 < 4 <= 7 > 6 >= 8) << endl ; // fourth precedence (< , <= , > , >=) [L to R]
    
    cout  << "fifth precedence: (7 == 7 != 30) = " << (7 == 7 != 30) << endl ; // fifth precedence (== , !=) [L to R]
    
    cout  << "sith precedence: (7 && 2 ) = " << (7 && 2 ) << endl ; // sith precedence (&&) [L to R]
    
    cout  << "seven precedence: (7 || 30 ) = " << (7 || 30 ) << endl ; // seven precedence (||) [L to R]
    
    cout   << "last precedence: (a = 3 - 1 * 2) = " << (a = 3 - 1 * 2) << endl ; // last precedence (assingment operator : =) [R to L]
    
    return 0;
}