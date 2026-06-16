#include <iostream>
#include <string>
using namespace std;

// student grade calculation system using functions

float totalMarks(int n){  // total marks

    float marks;
    float total = 0;

    cout << "\nEnter your " << n <<" subject marks (between 0 and 100): " << endl ;

    for (int i = 1; i <= n; i++){
        cout << "Subject " << i << ":- ";
        cin >> marks;
        if (marks < 0 || marks > 100){
            cout << "Invalid marks. Please enter marks between 0 and 100!";
            cin >> marks;
        } 
        total += marks;
    }

    cout << "\nYour total marks are: ";

    return total;
}

float percentage(float total, int n){ // percentage
    return (total / (n * 100)) * 100;
}

char grade(float percentage){ // grade
    if (percentage >= 80)
        return 'A';
    else if (percentage >= 70)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 50)
        return 'D';
    else
        return 'F';
}

int main(){

    string name;
    cout << "Enter your name:";
    cin >> name;

    int sub;

    cout << "Enter number of subjects: ";
    cin >> sub;

    float total = totalMarks(sub);

    cout << "\nTotal Marks: " << total;

    float percent = percentage(total , sub);

    cout << "\nPercentage: " << percentage(total, sub) << "%";

    cout << "\nGrade: " << grade(percent) ;

    return 0;
}