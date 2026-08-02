#include <iostream>

using namespace std;

double myPow(double x, int n){

    if(n == 0) return 1.0; // x^0 = 1
    if(x == 1) return 1.0; // 1^n = 1
    if(x == 0) return 0.0; // 0^n = 0
    if(x == -1 && n % 2 == 0) return 1.0; // even power absorbs negative sign
    if(x == -1 && n % 2 != 0) return -1.0; // odd power remains negative sign

    long binForm = n;
    double ans = 1;

    if (n < 0){ // handle negative power
        x = 1 / x;
        binForm = -binForm;
    }

    while (binForm > 0){ // basic logic
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main() {
    
    /*Power Exponential Problem*/
    // Time Complexity => O(logn)
    // leetcode 50

    double x = 3 ;
    int n = 5;

    cout << x << "^" << n << " = " << myPow(x, n) << endl;

    return 0;
}
