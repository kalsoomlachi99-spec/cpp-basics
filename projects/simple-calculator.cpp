#include<iostream>
using namespace std;
int main(){

    /*Bulding Up A Simple Calculator*/

    int a , b ;
    char op;

    cout << "\nEnter first number: ";
    cin >> a ;
    cout << "\nEnter any one operator ( + , - , * , % , / ): " ;
    cin >> op;
    cout << "\nEnter second number: ";
    cin >> b ;

    switch (op) {
    case  '+' :
    cout << "Result = " << a + b ;
    break;
    case '-' :
    cout << "Result = " << a - b ;
    break;
    case  '*' :
    cout << "Result = " << a * b ;
    break;
    case '%' :
    if ( b == 0){
        cout << "Invalid calculation!" ;
    } else {
        cout << "Result = " << a % b ;
    }
    break;
    case '/' :
    if ( b == 0){
        cout << "Can't divide by zero" ;
    } else {
    cout << "Result = " << a / b ;
    }
    break;
    default :
    cout << "Invalid calculation!" ;
    break;
    }
    
    cout << "\nThanks for using a simple calulator!";

    return 0;
}