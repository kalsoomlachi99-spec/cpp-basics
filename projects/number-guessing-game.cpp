#include<iostream>
using namespace std;    
int main (){
  
    /*Number guessing game project version 4 (random number)*/

    int secret_Num = 7;
    int guess_Num;
    int attempts = 0;

    cout << "To play game guess a number: ";
    cin >> guess_Num;
        
    if(guess_Num != secret_Num){
        for(int i=0; i<100; i++){
            secret_Num = rand() % 100 + 1; // Generate a random number between 1 and 100
        }
    }

 
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
    
        attempts++;
    }

    cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;

    return 0;

}
