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
    
    cout << "\nEnter an integer: ";
    cin >> y ;    

    if (y < 0){
        cout << "\nThe number you enter is:" << y;
    } else {
        cout << "\nThe number you enter is not a negative number." ;
    }

    // checking if an alphabet entered by user is upper case or lower case
    char ch;
    
    cout << "\nEnter an alphabet: ";
    cin >> ch;
    
    if (ch >= 65 && ch <= 90) {
        cout << "\nThe alphabet you entered is upper case .";
    } else if (ch >= 97 && ch <= 122){
        cout << "\nThe alphabet you entered is lower case .";
    } else {

        cout << "\nInvalid alphabet";
    }

    // division of students according to their marks percentage
    int percentage;

    cout << "\nEnter your marks percentage (between 0 and 100): ";
    cin >> percentage;
   
    while (percentage < 0 || percentage > 100) {
        cout << "Invalid input. Please enter a percentage between 0 and 100: ";
        cin >> percentage;
    }
    if(percentage >= 60){
        cout << "Ist division";
    } else {
        cout << "2nd division";
    }

    // calculating net salary 
    float salary;

    cout << "\nEnter your basic salary in $: ";
    cin >> salary;

    if(salary >= 10000){
        salary = salary + salary * 0.15;
        cout << "net salary is : " << salary;
    } else {
        salary = salary + salary * 0.07;
        cout << "net salary is : " << salary << "$";
    }


  return 0;
}