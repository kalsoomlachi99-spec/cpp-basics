#include<iostream>
using namespace std;

// function definition

// min of two numbers
double min_of_two_numbers (double a, double b){

    if ( a < b ) {
        return a;
    } else {
        return b;
    }   

}

int main(){

    // funtion call / invoke
 
 cout << min_of_two_numbers(10.5, 20.5) << endl;  // min of two numbers


    return 0;
}