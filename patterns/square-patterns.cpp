#include <iostream>

using namespace std;

void line() {
    cout << "------------------------" << endl;
}

int main() {
    
    /*Square Patterns*/

    int n = 3;

    cout << "Square Pattern no 1:" << endl;
    //version 1:
    for (int i = 1; i <= n; i++){ 
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    line();

    //version 2:
    for (int i = 0; i < n; i++){ 
          char ch = 'A';
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    line();

    //version 3:
    for (int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    line();

    cout << "Square Pattern no 2: " << endl;
    // version 1:
    int nums = 1;
    for (int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){
            cout << nums << " ";
            nums++;
        }
        cout << endl;
    }
    line();

    //version 2:

    char ch = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    line();

    return 0;
}
