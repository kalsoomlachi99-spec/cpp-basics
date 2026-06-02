#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;    
int main (){
  
    /*Number guessing game project version 4 (random number)*/

    srand(time(0)); // Seed the random number generator with the current time 
    int secret_Num =  rand() % 100 + 1; 
    int guess_Num;
    int attempts = 0;
    bool won = false;

     cout << "Guess a number between 1 and 100: ";
    cin >> guess_Num;
    attempts++;
   
    while (guess_Num != secret_Num){
        
        if (guess_Num > secret_Num) {
            cout << "Too high! ";
        } else {
            cout << "Too low! ";
        }

        cout << "try again: ";
        cin >> guess_Num;
                
        attempts++;

            if (attempts >= 10) {
            cout << "Game over! You've used all 10 attempts. The secret number was " << secret_Num << ".\n";    
            break;
        }

    }
    
    if (guess_Num == secret_Num) {
        won = true;
    }

    if (won == true) {
    cout << " Congratulations!\n The secret number was " << secret_Num << ".\n";
    
    if (attempts == 1) {
    cout << "You guessed the number in 1 attempt." << endl;
} else {
    cout << "You guessed the number in " << attempts << " attempts." << endl;
}
    } else {
        cout << "Try for another time!.\n";
    }

    return 0;

}
