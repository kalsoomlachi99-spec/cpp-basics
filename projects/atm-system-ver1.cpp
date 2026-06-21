#include<iostream>
using namespace std;

int main(){
     /*A complete ATM system implementation*/
     
     cout<<"Welcome to the ATM System!"<<endl;

    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    do { 
        cout << "\nMenu:" << endl;
        cout << "1. Check Balance" << endl;  
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

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
    } while (choice != 4);


    return 0;
}