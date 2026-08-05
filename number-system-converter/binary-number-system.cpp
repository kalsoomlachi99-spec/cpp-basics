#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0 , pow = 1;
 
    if(decNum == 0){
    return 0;
}

    while (decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
         
        ans += ( rem * pow );
        pow *= 10;
    }
    return ans; // binary form
}

int binaryToDec(int binNum){
    int ans = 0 , pow = 1;

    while (binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10; 
        pow *= 2;
    }
    return ans ; // decimal form
}

bool isBinary(int binNum){
    while(binNum > 0){
        int digit = binNum % 10;

        if(digit != 0 && digit != 1){
            return false;
        }

        binNum /= 10;
    }

    return true;
}

int main() {
    int decNum, binNum ;

    cout << "Enter a decimal and binary number you want to convert.\n";
    cout << "Decimal Number: ";
    cin >> decNum;
    
    cout << "Binary Number: ";
    cin >> binNum;

    while (!isBinary(binNum)){
    cout << "Invalid binary number!\n";
     cin >> binNum;
}
    
    cout << "\nBinary form of " << decNum << " = " << decToBinary(decNum) << endl;
    cout << "Decimal form of " << binNum << " = " << binaryToDec(binNum) << endl;

    return 0;
}
