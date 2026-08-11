#include <iostream>
using namespace std;

int main() {

    //Arrays creation and initialization in different methods

    int marks [5] = {99, 38, 56, 100, 88};
    double price [] = {23.44, 99.99, 105.64, 23.32};

    cout << "\nmarks[0]: " << marks[0] << endl;
    cout << "marks[1]: " << marks[1] << endl;
    cout << "marks[2]: " << marks[2] << endl;
    cout << "marks[3]: " << marks[3] << endl;
    cout << "marks[4]: " << marks[4] << endl;

    cout << "---------------------\n";

    cout << "price [0]: " << price[0] << endl;
    cout << "price [1]: " << price[1] << endl;
    cout << "price [2]: " << price[2] << endl;
    cout << "price [3]: " << price[3] << endl;

    cout << "---------------------\n";
    
    cout << "size of marks array is: " << sizeof(marks) / sizeof(int) << endl;
    cout << "size of price array is: " << sizeof(price) / sizeof(double) << endl;

    cout << "---------------------\n";

    return 0;
}
