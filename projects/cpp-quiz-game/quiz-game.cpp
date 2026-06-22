#include<iostream>
using namespace std;
int main(){

    /*Quiz game*/

    cout << "Welcome to quiz game! \n";
   
    char answer;
    int score = 0;
    const int TOTAL_QUESTIONS = 5;

    cout << "\nQuestion no 1: \n";
    cout << "What is the capital of Pakistan? \n";
    cout << " A. Karachi \n B. Lahore \n C. Islamabad \n D. Kohat \n ";
    cin >> answer;
     if(answer!='A' && answer!='a' &&
        answer!='B' && answer!='b' &&
        answer!='C' && answer!='c' &&
        answer!='D' && answer!='d'){
        cout << "Invalid option!\n";
   } else if (answer == 'C' || answer == 'c'){
        score ++;
        cout << "Good! correct answer \n";
        cout << "Score = " << score << " / " << TOTAL_QUESTIONS << "\n";
    } else {
        cout << "Wrong answer! Correct option is 'C'\n ";
    }
    cout << "\n-------------------------\n";
    
    cout << "\nQuestion no 2: \n";
    cout << "Which programming language are you currently learning?\n";
    cout << " A. Python \n B. Java \n C. Java script \n D. C++ \n ";
    cin >> answer;
     if(answer!='A' && answer!='a' &&
        answer!='B' && answer!='b' &&
        answer!='C' && answer!='c' &&
        answer!='D' && answer!='d'){
        cout << "Invalid option!\n";
   } else if (answer == 'D' || answer == 'd'){
        score ++;
        cout << "Good! correct answer \n";
        cout << "Score = " << score << " / " << TOTAL_QUESTIONS << "\n";
    } else {
        cout << "Wrong answer! Correct option is 'D' \n";
    }
    cout << "\n-------------------------\n";
     
    cout << "\nQuestion no 3: \n";
    cout << "Which planet is known as the Red Planet?\n";
    cout << " A. Earth  \n B. Mars \n C. Venus \n D. Jupiter \n";
    cin >> answer;
     if(answer!='A' && answer!='a' &&
        answer!='B' && answer!='b' &&
        answer!='C' && answer!='c' &&
        answer!='D' && answer!='d'){
        cout << "Invalid option!\n";
   } else if (answer == 'B' || answer == 'b'){
        score ++;
        cout << "Good! correct answer \n";
        cout << "Score = " << score << " / " << TOTAL_QUESTIONS << "\n";
    } else {
        cout << "Wrong answer! Correct option is 'B' \n";
    }
    cout << "\n-------------------------\n";
    
    cout << "\nQuestion no 4: \n";
    cout << "What does CPU stand for? \n";
    cout << " A. Central Processing Unit \n B. Computer Processing Unit \n C. Central Program Unit \n D. Computer Program Unit\n ";
    cin >> answer;
    if(answer!='A' && answer!='a' &&
        answer!='B' && answer!='b' &&
        answer!='C' && answer!='c' &&
        answer!='D' && answer!='d'){
        cout << "Invalid option!\n";
   } else if (answer == 'A' || answer == 'a'){
        score ++;
        cout << "Good! correct answer \n";
        cout << "Score = " << score << " / " << TOTAL_QUESTIONS << "\n";
    }  else {
        cout << "Wrong answer! Correct option is 'A' \n";
    }
    cout << "\n-------------------------\n";

    cout << "\nQuestion no 5: \n";
    cout << "What does OOPs stand for?\n";
    cout << " A. Object Oriented Programming \n B. Organic Oriented Programming \n C. Object Oriented Process \n D. Organic Objective Process\n";
    cin >> answer;
     if(answer!='A' && answer!='a' &&
        answer!='B' && answer!='b' &&
        answer!='C' && answer!='c' &&
        answer!='D' && answer!='d'){
        cout << "Invalid option!\n";
   } else if (answer == 'A' || answer == 'a'){
        score ++;
        cout << "Good! correct answer\n";
        cout << "Score = " << score << " / " << TOTAL_QUESTIONS << "\n";
    } else {
        cout << "Wrong answer! Correct option is 'A'\n ";
    } 
    cout << "\n-------------------------\n";
 
    cout << "\nYour final score is " << score << " / " << TOTAL_QUESTIONS << "\n";

    if(score == 5){
        cout << "Excellent! Perfect score!\n";
    } else if(score >= 3){  
        cout << "Good job!\n";
    } else{
        cout << "Keep practicing!\n";
    }

    cout << "\nThanks for quiz game!";




    return 0;
}