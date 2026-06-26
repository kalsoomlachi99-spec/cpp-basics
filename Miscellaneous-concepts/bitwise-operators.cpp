#include <iostream>
using namespace std;

int main() {

    // Bitwise operators

    cout << "[BITWISE AND]: (6 & 10) = " << (6 & 10) << endl; //2  [BITWISE AND]
    
    cout << "[BITWISE OR]: (6 | 10) = " << (6 | 10) << endl; //14  [BITWISE OR]
    
    cout << "[BITWISE XOR]: (6 ^ 10) = " << (6 ^ 10) << endl; //12  [BITWISE XOR]
    
    cout << "[BITWISE LEFT SHIFT OPERATOR]: (10 << 2) = " << (10 << 2) << endl; // 40 (a * 2^b) [BITWISE LEFT SHIFT OPERATOR]
    
    cout << "[BITWISE RIGHT SHIFT OPERATOR]: (10 >> 2) = " << (10 >> 1) << endl; //5 (a * 2^b)  [BITWISE RIGHT SHIFT OPERATOR]

    return 0;
}