#include<iostream>
#include<string>
using namespace std;

// calculate prime number using function

string primeNumCheck(int n){

    if (n <= 1){
        return "not prime";
    } else {
        for (int i = 2 ; i * i <= n ; i++){
            if (n % i == 0){
                return "not prime";
            }
        }
    }
    return "prime";
}

int main (){
    cout << primeNumCheck(-12) << endl;
    cout << primeNumCheck(-7) << endl;
    cout << primeNumCheck(0) << endl;
    cout << primeNumCheck(1) << endl;
    cout << primeNumCheck(5) << endl;
    cout << primeNumCheck(13) << endl;

    return 0;
}