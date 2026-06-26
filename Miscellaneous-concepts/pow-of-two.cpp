#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // figure out how to find if a number is power of 2 
    /*using loop*/

    int num;
    bool isPowOfTwo = false;

    cout << "Enter the number you want to check is that number is the power of 2 or not: \n";
    cout << "Number: " ;
    cin >> num;

    for (int i = 1; i <= num; i++){
        int powOfTwo = pow(2, i) ;
        if (num == powOfTwo){
            cout << " Yes! " << num << " is the power of 2" << endl ;
            isPowOfTwo = true;
            break;
        } 
    }

    if (isPowOfTwo == false){
        cout << " No! " << num << " is not the power of 2 " << endl ;
    }

    return 0;
}
