#include <iostream>
using namespace std;
int main(){
   // Testing GitHub account
/*Checking if a number is prime or not*/

int n;

cout << "enter a number: ";
cin >> n;

bool isPrime = true;

if(n <= 1){
    isPrime = false;
} else {
  for(int i = 2 ; i * i <= n ; i++){
    if ( n % i == 0 ) {
       isPrime = false;
       break;
    } 
  }
}

if ( isPrime == true ) {
    cout << "prime number";
} else {
    cout << "non prime number";
}

    return 0;
}