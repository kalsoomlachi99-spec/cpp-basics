#include<iostream>
using namespace std;

float areaOfTriangle ( float l , float h){

    float length , height;

    cout << "enter length and height";
    cin >> length >> height ;

    return (1/2) * (length*height) ;
}

int main (){

    /*Finding out area of a triangle*/

    float length , height;

    cout << "\nTo find area of triangle enter length and height.\n" ;
     
    cout << "\nEnter lenght: " ;
    cin >> length;

    cout << "\nEnter height: ";
    cin >> height;

    cout << "\nArea of triangle is " << areaOfTriangle(length , height ) << " sqr units";

     
    return 0;
}