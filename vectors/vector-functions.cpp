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

    cout << "Initial size of vector is: " << vec.size() << endl;

    line();

    cout << "===== Push Back Function =====" << endl; 

    vec.push_back(1); // adding a value at the end of a vector
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

    vec.emplace_back(6); // adding a value at the end of a vector

    cout << "values after emplace back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after emplace back function = " << vec.size() << endl;

    line();

    cout << "===== Pop Back Function =====" << endl; 

    vec.pop_back(); // removing a value from the end of a vector

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

    //iterators -> works like a pointer but not a pointer
    vec.erase(vec.begin()); // erase the value at index 1

    cout << "values after erase function (specific index): ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;

    vec.erase(vec.begin()+1, vec.begin()+2); // use to erase a range of values

    cout << "values after erase function (range of values): ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after erase function = " << vec.size() << endl;

    line();

    cout << "===== Insert Function =====" << endl;
    
    vec.insert(vec.begin()+3, 307); //(position, value) insert a value at a specific position

    cout << "values after insert function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
