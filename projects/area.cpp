#include <iostream>
using namespace std;

double areaOfTriangleResult(double breadth, double height){  // area of triangle    

    double area = (1.0/2)*(breadth*height);

    return area;
}

double areaOfSquareResult(double breadth , double height){  // area of square

    double area = (breadth*height);

    return area;
}

double volumeOfCuboidResult(double breadth, double length, double height){  //volume of rectangular box

    double volume = (breadth*height*length);

    return volume;
}


int main() {

    double breadth , height , length;

    // area of triangle
    
    cout << "For area of triangle enter breadth and height.\n";

    do {
        cout << "breadth: ";
        cin >> breadth;

        if (breadth <= 0)
        cout << "Please enter a positive value.\n";

    } while (breadth <= 0);

    do {
        cout << "height: ";
        cin >> height;

        if (height <= 0)
        cout << "Please enter a positive value.\n";

    } while (height <= 0);

   double areaoftriangle = areaOfTriangleResult(breadth, height);

   // area of square

    cout << "\nFor area of square enter breadth and height.\n";
    do {
        cout << "breadth: ";
        cin >> breadth;

        if (breadth <= 0)
        cout << "Please enter a positive value.\n";

    } while (breadth <= 0);

    do {
        cout << "height: ";
        cin >> height;

        if (height <= 0)
        cout << "Please enter a positive value.\n";

    } while (height <= 0);

   double areaofsquare = areaOfSquareResult(breadth, height);

   // area of cuboid
   
    cout << "\nFor volume of cuboid enter breadth , length and height.\n";

    do {
        cout << "breadth: ";
        cin >> breadth;

        if (breadth <= 0)
        cout << "Please enter a positive value.\n";

    } while (breadth <= 0);

    do {
        cout << "length: ";
        cin >> length;

        if (length <= 0)
        cout << "Please enter a positive value.\n";

    } while (length <= 0);

    do {
        cout << "height: ";
        cin >> height;

        if (height <= 0)
        cout << "Please enter a positive value.\n";

    } while (height <= 0);

   double Volume = volumeOfCuboidResult(breadth, length, height);

   cout << "\n=====RESULTS=====\n";
   cout << "\narea of triangle = " << areaoftriangle << " square units ";
   cout << "\narea of square = " << areaofsquare << " square units ";   
   cout << "\nvolume = " << Volume << " cubic units ";
    
    return 0;
}