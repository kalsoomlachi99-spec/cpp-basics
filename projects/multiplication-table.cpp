#include<iostream>
using namespace std;
int main()
{
/*A multiplication table project with custom limit*/

    int n;
    int limit;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter limit: ";
    cin >> limit;

    if (limit <= 0){
        cout << "Limil should be greater than 0";
    }

    for(int i=1; i <= limit; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}