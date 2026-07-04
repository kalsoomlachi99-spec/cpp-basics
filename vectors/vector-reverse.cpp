#include <iostream>
#include <vector>
using namespace std;

void input(vector <int> &vec){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << "enter vector elements: ";
   
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
   
}

void reverseVector(vector <int> &vec){

    int start = 0, end = vec.size() - 1;

    while (start < end){
        swap(vec[start], vec[end]);
        start ++;
        end --;
    }

}

int main() {

    // reverse of a vector

    cout << " ===== Vector Reverse ===== " << endl;

    vector <int> vec ;

    input(vec);

    cout << "Reverse of a vector is: ";
    reverseVector(vec);

    for (int value : vec){
        cout << value << " ";
    }
    return 0;
}
