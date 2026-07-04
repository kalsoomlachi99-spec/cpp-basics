#include<iostream>
using namespace std;

void line(){
    cout << " ----------------------- " << endl;
}
int main(){

    // a number enter by user is  positive , negative or zero

    cout << " ===== Type of Number ===== " << endl;

    int x;

    cout << "Enter an integer: ";
    cin >> x ;

    if (x > 0){
        cout << "The given number is positive." << endl ;
    } else if (x < 0) {
        cout << "The given number is negative." << endl ;
    } else {
        cout << "The given number is zero." << endl ;
    }

    line();

    // print the number entered by user , only if , the number entered is negative

    cout << " ===== Print Negative Number ===== " << endl;

    int y; 
    
    cout << "Enter an integer: ";
    cin >> y ;    

    if (y < 0){
        cout << "The number you enter is:" << y << endl ;
    } else {
        cout << "The number you enter is not a negative number." << endl ;
    }

    line();

    // checking if an alphabet entered by user is upper case or lower case

    cout << " ===== Case of Alphabet ===== " << endl;

    char ch;
    
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    if (ch >= 65 && ch <= 90) {
        cout << "The alphabet you entered is upper case ." << endl ;
    } else if (ch >= 97 && ch <= 122){
        cout << "The alphabet you entered is lower case ." << endl ;
    } else {

        cout << "Invalid alphabet" << endl ;
    }

    line();

    // division of students according to their marks percentage

    cout << " ===== Student Grade Division ===== " << endl;

    int percentage;

    cout << "Enter your marks percentage (between 0 and 100): ";
    cin >> percentage;
   
    while (percentage < 0 || percentage > 100) {
        cout << "Invalid input. Please enter a percentage between 0 and 100: ";
        cin >> percentage;
    }
    if(percentage >= 60){
        cout << "Ist division" << endl ;
    } else {
        cout << "2nd division" << endl ;
    }

    line();

    // calculating net salary after bounas

    cout << " ===== Bounas in Salary ===== " << endl;

    float salary;

    cout << "Bounas for salary greater than 10k is 0.15%." << endl;
    cout << "Bounas for salary less than 10k is 0.07%." << endl;

    cout << "Enter your basic salary in $: ";
    cin >> salary;

    if(salary >= 10000){
        salary = salary + salary * 0.15;
        cout << "Salary after bounas is : " << salary << endl ;
    } else {
        salary = salary + salary * 0.07;
        cout << "Salary after bounas is : " << salary << "$" << endl ;
    }

    line();

    // checking if three numbers are equal or not

    cout << " ====== Equality of 3 Numbers ====== " << endl;

    int num[3];

    cout << "Enter three numbers to check equality." << endl;

    for (int i = 0; i < 3; i++){
        cout << "Number " << i+1 << ": ";
        cin >> num[i];
    }

    if (num[0] == num[1] && num[1] == num[2]){
        cout << "All numbers are equal." << endl;
    } else if (num[0] == num[1]){
        cout << "Only first two nubers equal." << endl;
    } else if(num[1] == num[2]){
        cout << "Only second and last numbers are equal." << endl;
    } else if(num[0] == num[2]){
        cout << "Only first and last numbers are equal." << endl;
    } else {
        cout << "Not equal numbers." << endl;
    }

  return 0;
}
