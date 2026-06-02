#include<iostream>
using namespace std;    
int main (){
  
    /*Number guessing game project version 3 (keep guessing until correct)*/

    int secret_Num = 7;
    int guess_Num;

    cout << "To play game guess a number: ";
    cin >> guess_Num;
 
    while (guess_Num != secret_Num){
        if (guess_Num > secret_Num)
        {
            cout << "Too high! ";
        }
        else
        {
            cout << "Too low! ";
        }
        cout << "Wrong guess, try again: ";
        cin >> guess_Num;
    }

    cout << "Congratulations! You guessed the number." << endl;

    return 0;

}
