#include <iostream>
using namespace std;

// creating multiplication table of number(s) entered by user

void multiplicationTable(){
    int num , limit;

    cout << "for which number do you want to create a multiplication table? ";
    cin >> num;

    cout << "enter limit for multiplication table: ";
    cin >> limit;

    while (limit <= 0){
        cout << "limit should be greator than 0.\n";
        cout << "enter limit correctly";
        cin >> limit;
    }

    for (int i = 1; i <= limit; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {

    int n;
    cout << "how many tables you want to create? " ;
    cin >> n;

    while (n <= 0){
        cout << "number of tables should be greator than 0. \nenter again: " ;
        cin >> n;
    }

    for (int i = 0; i < n ; i++){
        multiplicationTable() ;
    }

    cout << "Thanks for using! See you next time! Good bye!";
    
    return 0;
}
