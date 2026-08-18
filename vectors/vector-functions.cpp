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

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);


    cout << "values after push back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after push back function = " << vec.size() << endl;

    line();

    cout << "===== Emplace Back Function =====" << endl;

    vec.emplace_back(6);

    cout << "values after emplace back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after emplace back function = " << vec.size() << endl;

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
    
    cout << "value at index 2: " << vec.at(2) << endl;   // value at index

    line();

    cout << "===== Capacity Function =====" << endl;

    cout << "Capacity is: " << vec.capacity() << endl; // how many elements can be currently stored in a vector

    line();

    cout << "===== Erase Function =====" << endl;

    vec.erase(vec.begin() + 1); // erase the value at index 1

    cout << "values after erase function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after erase function = " << vec.size() << endl;

    line();
    
    return 0;
}
