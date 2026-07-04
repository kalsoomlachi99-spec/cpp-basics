#include <iostream>
#include <vector>
using namespace std;

void line(){
    cout << "-------------------" << endl;
}

int main() {

    // functions in vector

    vector <int> vec;

    cout << "\n===== Size Function =====" << endl;

    cout << "Size = " << vec.size() << endl;

    line();

    cout << "===== Push Back Function =====" << endl;

    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(6);

    cout << "values after push back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after push backc function = " << vec.size() << endl;

    line();

    cout << "===== Pop Back Function =====" << endl;

    vec.pop_back();

    cout << "values after pop back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after pop back function = " << vec.size() << endl;

    line();

    cout << "===== Front Function =====" << endl;

    cout << "first value: " << vec.front() << endl;  // first value of a vector

    line();

    cout << "===== Back Function =====" << endl;

    cout << "last value: " << vec.back() << endl;  // last value of a vector

    line();

    cout << "===== At Function =====" << endl;
    
    cout << "value at index 2: " << vec.at(1) << endl;   // value at index

    line();

    cout << "===== Capacity Function =====" << endl;

    cout << "Capacity is: " << vec.capacity() << endl; // capabilty to store value
    
    return 0;
}
