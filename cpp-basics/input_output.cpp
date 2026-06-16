#include<iostream>
using namespace std;
int main(){

    // a number enter by user is  positive , negative or zero

    int x;

    cout << "Enter an integer: ";
    cin >> x ;

    if (x > 0){
        cout << "The given number is positive." ;
    } else if (x < 0) {
        cout << "The given number is negative." ;
    } else {
        cout << "The given number is zero." ;
    }

}