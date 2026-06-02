#include<iostream>
using namespace std;    
int main (){
  
    /*Number guessing game project version 2*/

    int secret_Num = 7;
    int guess_Num;

    cout << "To play game guess a number: ";
    cin >> guess_Num;
 
    if (guess_Num == secret_Num){
        cout << "Congratulations! You guessed the number.";
    }
    else if (guess_Num < secret_Num){
        cout << "Too low! Try again.";
    }
    else {
        cout << "Too high! Try again.";
    }

}
