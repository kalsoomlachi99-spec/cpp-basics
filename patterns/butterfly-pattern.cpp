#include <iostream>

using namespace std;

int main() {

    /*Butterfly Pattern*/
    // pratice problem

    int n = 4;

    cout << "Butterfly Pattern:" << endl;

    // Top

    for(int i = 0; i < n; i++){

        //left triangle
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        // spaces
        for(int j = 0; j < 2*(n-i-1); j++){
            cout << " ";
        }
        //right triangle
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }

        cout << endl;
    }

    //Bottom

    for (int i=0; i<n; i++){
        //left triangle
        for(int j=n; j>i; j--){
            cout << "*";
        }
  
        // spaces
        for(int j=0; j < i*2; j++){
            cout << " ";
        }

        //right triangle
        for(int j=n; j>i; j--){
            cout << "*";
        }

        cout << endl;
    }
  
    cout << "-----------------------\n";

    return 0;
}
