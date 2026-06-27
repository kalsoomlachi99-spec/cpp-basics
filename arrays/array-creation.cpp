#include <iostream>
using namespace std;

int main() {

    //Arrays creation and initialization in different methods

    int marks [5] = {99, 38, 56, 100, 88};
    double price [] = {23.44, 99.99, 105.64, 23.32};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout << price[0] << endl;
    cout << price[1] << endl;
    cout << price[2] << endl;
    cout << price[3] << endl;
    
    cout << sizeof(marks) << endl;
    cout << sizeof(price) << endl;

    return 0;
}
