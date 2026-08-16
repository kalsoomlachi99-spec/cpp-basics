#include <iostream>
using namespace std;

void line(){
    cout << "-----------------" << endl;
}

int main() {
    
    /*Triangle Patterns*/
    int n = 4;

    cout << "Triangle pattern no 1: " << endl;

    //Easy with stars
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++) {
            cout << "* " ;
        }
        cout << endl;
    }
    line();

    //Easy with numbers

    //version 1:
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++) {
            cout << (i+1) << " " ;
        }
        cout << endl;
    }
    line();

    //version 2:
    for(int i = 0; i < n; i++){
        for (int j = 1; j <= i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    line();

    char ch = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " " ;
        }
        ch++;
        cout << endl;
    }
    line();

    /*Reverse Triangle Patterns*/

    //Easy with numbers

    for(int i = 0; i < n; i++){
        for(int j = i+1; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    line();

    //Easy with characters
    for (int i=0; i<n; i++){
        char ch = 'A';
        for (int j=i+1; j>0; j--){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    line();

    /*Floyd's triangle Pattern*/

    //Easy with nums
    int num = 1;
    for (int i=0; i<n; i++){
        for (int j=i+1; j>0; j--){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    line();

    //Easy with char
    char floydCh ='A';
    for (int i=0; i<n; i++){
        for (int j=i+1; j>0; j--){
            cout << floydCh << " ";
            floydCh++;
        }
        cout << endl;
    }
    line();

    /*Inverted Triangle Pattern*/
 
    //Easy with numbers
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << (i+1) ;
        }
        cout << endl;
    }
    line();

    //Easy with character
    char invertedCh = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << invertedCh;
        }
        invertedCh++;
        cout << endl;
    }
    line();


    return 0;
}
