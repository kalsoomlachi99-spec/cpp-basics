#include <iostream>
#include <vector>
using namespace std;

void line(){
    cout << "-------------------" << endl;
}

int main() {

    // functions in vector

    vector <int> vec;

    cout << "\n===== Initial Stage =====\n" << endl;

    cout << "Initial size = " << vec.size() << endl;

    line();

    cout << "\n===== Push Back Function =====\n" << endl;

    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(56);
    vec.push_back(67);

    cout << "values after push back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after push backc function = " << vec.size() << endl;

    line();

    cout << "\n===== Pop Back Function =====\n" << endl;

    vec.pop_back();

    cout << "values after pop back function: ";
    for (int val : vec){
        cout << val << " ";
    }
    cout << endl;
    
    cout << "Size after pop back function = " << vec.size() << endl;

    line();

    cout << "\n===== Front Function =====\n" << endl;

    cout << "first value: " << vec.front() << endl;  // first value of a vector

    line();

    cout << "\n===== Back Function =====\n" << endl;

    cout << "last value: " << vec.back() << endl;  // last value of a vector

    line();

    cout << "\n===== At Function =====\n" << endl;
    
    cout << "value at index 2: " << vec.at(2) << endl;   // value at index

    line();
    
    return 0;
}
