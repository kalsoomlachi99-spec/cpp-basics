#include<iostream>
using namespace std;

float area_of_triangle ( float length , float height){

    float area = ( 1 / 2 ) * ( height * length );

    return area ;
}

int main (){

    /*Finding out area of a triangle*/

    float length , height;

    cout << "\nTo find area of triangle enter length and height.\n" ;
     
    cout << "\nEnter lenght: " ;
    cin >> length;

    cout << "\nEnter height: ";
    cin >> height;

    cout << "\nArea of triangle is " << area_of_triangle(length , height ) << " sqr units";

     
    return 0;
}