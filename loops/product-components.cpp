#include <iostream>
using namespace std;

int main() {
    // Product components of a number without repeating them using while loop

    cout << "\n ===== Product Components of a number ===== \n" << endl;

    int num;
    
    cout << "Enter a greater than zero positive number to find its product components." << endl;
    cout << "Number: " ;
    cin >> num;

    while (num <= 0){
        cout << "Error! The number you entered is not a positve and greater than zero." << endl;
        cout << "Again enter the number" << endl;
        cout << "Number: ";
        cin >> num;
    }

    cout << "Product components are: " << endl;

    int i = 1;

    while (i*i < num) {

        if (num % i == 0){
            cout << i << " * " << num / i << endl;
        }
        i++;
    }

    return 0;
}
