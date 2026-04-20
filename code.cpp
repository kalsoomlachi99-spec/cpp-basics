#include <iostream>
using namespace std;

int linearSearch(int mat[][3], int rows, int cols, int key){ //no of cols is important here! 
  for (int i = 0; i<rows; i++){
    for (int j = 0; j<cols; j++){
        if(mat[i][j]==key){
           return mat[i][j] ;
        }
    }
}
return -1;
}

int main() {

int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int rows = 3;
int cols = 3;

cout << linearSearch(matrix, rows, cols, 7);


    return 0;
}