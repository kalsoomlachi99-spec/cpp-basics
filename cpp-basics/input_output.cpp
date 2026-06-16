#include<iostream>
using namespace std;
int main(){

    // a number enter by user is  positive , negative or zero
    int x;

    cout << "Enter an integer: ";
    cin >> x ;

    if (x > 0){
        cout << "\nThe given number is positive." ;
    } else if (x < 0) {
        cout << "\nThe given number is negative." ;
    } else {
        cout << "\nThe given number is zero." ;
    }

    // print the number entered by user , only if , the number entered is negative
    int y; 
    
    cout << "Enter an integer: ";
    cin >> y ;    

    if (y < 0){
        cout << "\nThe number you enter is:" << y;
    } else {
        cout << "\nThe number you enter is not a negative number." ;
    }

  return 0;
}