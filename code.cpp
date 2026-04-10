#include <iostream>
using namespace std;

int main() {

/*maximum out of four integers using conditional operator*/

int s = 13, m = 18, k = 307, u = 30;

int max1 = (s>m)? s : m;
int max2 = (k>u)? k : u;
int max = (max1>max2)? max1 : max2;

cout <<"Maximum out of given four integer is " << max <<"!" << endl;



    return 0;
}