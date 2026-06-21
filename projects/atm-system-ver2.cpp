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
        cout << "\n\n<========== ATM MENU ==========>\n\n";

        cout << "   1.   Check balance\n ";
        cout << "   2.   Deposit money \n";
        cout << "   3.   Withdraw \n";
        cout << "   4.   Exit \n";   
    }

    void selectChoice(int choice){
        double amount;
        switch (choice) {
            case 1:
                cout << "Your balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if(amount > 0){
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                break;
            case 3:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount <= balance && amount > 0) {
                    balance -= amount;
                    cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
                } else {
                    cout << "Invalid withdrawal amount or insufficient funds." << endl;
                }
                break;
            case 4:
                    cout << "Thank you for using the ATM. Goodbye!" << endl;
                    break;
            default:
                    cout << "Invalid choice. Please try again." << endl;
        }
    }


};

int main (){

// login -> show menu -> check balance -> deposit money -> withdraw 

    return 0;
}
