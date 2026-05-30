#include <iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols){
    int maxColSum = INT_MIN;

    for(int j=0; j<cols; j++){
        int colSum = 0;
        for (int i=0; i<rows; i++){
            colSum += mat[i][j];
        }
        maxColSum = max(maxColSum , colSum);
    }
    return maxColSum;
}

int main(){
    // int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int rows =3;
    // int cols = 3;

/*is a number prime or not*/

int n;

cout << "enter a number: ";
cin >> n;

bool isPrime = true;

for(int i=2 ; i <= (n-1) ; i++){
    if (n%i==0){
       isPrime = false;
       break;
    } 
}

if(isPrime == true){
    cout<<"prime";
} else {
    cout <<"!prime";
}


int n;
cout << "enter a number: ";
cin >> n;
for(int i=2 ; i <= (n-1) ; i++){
    if (n%i==0){
       cout<<"not prime";
    } else{
        cout << "prime";
    }
}


    return 0;
}
