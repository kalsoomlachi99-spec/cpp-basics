#include <iostream>
#include <vector>
using namespace std;

int main() {
    // functions in vector

    vector <int> vec;

    cout << "Size before push back = " << vec.size() << endl;

    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(56);
    
    cout << "Size after push back = " << vec.size() << endl;
    

    
    return 0;
}
