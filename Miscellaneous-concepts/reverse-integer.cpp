#include <iostream>
using namespace std;

// Write a function to find the reverse an integer


int rev(int num){

    int rem, reverse = 0 , pow = 100;
    while (num > 0){
        rem = num % 10;
        num /= 10;
        reverse += (rem * pow );
        pow /= 10;
    }
    return reverse;
}

int main() {

    int num = 307;
    cout << rev(num) << endl;

    return 0;
}
