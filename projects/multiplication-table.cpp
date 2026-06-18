#include<iostream>
using namespace std;

int main()
{
/*A multiplication table project with custom limit*/

    int n ,  limit;

    cout << "Enter the number for creating a multiplication of: ";
    cin >> n;

    cout << "Enter limit: ";
    cin >> limit;
    

    while (limit <= 0){
        cout << "Limil should be greater than 0\n";
        cout << "Enter limit: ";
        cin >> limit;
    }

    for(int i=1; i <= limit; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}