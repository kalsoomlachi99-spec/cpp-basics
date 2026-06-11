#include<iostream>
using namespace std;

class ATM {
    private:
    int pin = 2524;
    double balance = 999;

    public:
    bool login(){
        int enteredPin;
        cout << "enter your pin \n";
        cin >> enteredPin;

        if (enteredPin == pin){
            cout << "login sucessfuly\n";
            return true;
        } else {
            cout << "Wrong pin! login denied";
            return false;
        }
    }

    void showMenu(){
        cout << "\n\n<==========ATM MENU==========>\n\n";

        cout << "   1.   Check balance ";
        cout << "   2.   Deposit money ";   
    }


}

int main (){

// login -> show menu -> check balance -> deposit money -> withdraw 








    return 0;
}