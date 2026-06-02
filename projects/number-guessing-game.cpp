#include<iostream>
using namespace std;    
int main (){
  
    /*Number guessing game project*/

    int secret_Num = 7;
    int guess_Num;

    cout << "To play game guess a number: ";
    cin >> guess_Num;

    (secret_Num == guess_Num) ? cout << "Congratulations! You guessed the number!" : cout << "Sorry! Try again.";

}
