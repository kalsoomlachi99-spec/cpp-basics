#include <iostream>
using namespace std;

int main() {

    // Bitwise operators

    cout << (6 & 10) << endl; //2  [BITWISE AND]
    cout << (6 | 10) << endl; //14  [BITWISE OR]
    cout << (6 ^ 10) << endl; //12  [BITWISE XOR]
    cout << (10 << 2) << endl; // 40 (a * 2^b) [BITWISE LEFT SHIFT OPERATOR]
    cout << (10 >> 1) << endl; //5 (a * 2^b)  [BITWISE RIGHT SHIFT OPERATOR]

    return 0;
}