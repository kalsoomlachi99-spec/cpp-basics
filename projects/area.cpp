#include <iostream>
using namespace std;

double areaOfTriangle(){  // area of triangle

    double bredth , height;

    cout << "For area of triangle enter bredth and height.\n";
    cout << "lenght: ";
    cin >> bredth;
    cout << "height: ";
    cin >> height;

    double area = (1.0/2)*(bredth*height);

    return area;
}

double areaOfSquare(){  // area of square

    double bredth , height;

    cout << "\nFor area of square enter bredth and height.\n";
    cout << "bredth: ";
    cin >> bredth;
    cout << "height: ";
    cin >> height;

    double area = (bredth*height);

    return area;
}

double volume(){  //volume

    double bredth, height , lenght;

    cout << "\nFor area of square enter bredth , length and height.\n";
    cout << "bredth: ";
    cin >> bredth;
    cout << "length: ";
    cin >> lenght;
    cout << "height: ";
    cin >> height;

    double area = (bredth*height*lenght);

    return area;

}


int main() {

   double areaoftriangle = areaOfTriangle();
   double areaofsquare = areaOfSquare();
   double Volume = volume();

   cout << "\narea of triangle = " << areaoftriangle;
   cout << "\narea of square = " << areaofsquare;   
   cout << "\nvolume = " << Volume;
    
    return 0;
}