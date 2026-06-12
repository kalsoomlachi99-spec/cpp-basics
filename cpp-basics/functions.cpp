#include<iostream>
#include<string>
using namespace std;

// function definition

// minimum two numbers
double min_of_two_numbers (double a, double b){

    if ( a < b ) {
        return a;
    } else {
        return b;
    }   

}

// sum of two numbers
double sum_of_two_numbers (double a, double b){
    return a + b;
}

// sum of numbers from 1 to n
int sumOfNum(int n){
    int sum = 0;

    for (int i = 1; i <= n ; i++){
        sum += i;
    }
    return sum;
}

// Calculate N factorial

int nFact(int n){
    int fact = 1;

    for (int i = 1; i <= n ; i++){
        fact *= i;
    }

    return fact;
}

// sum of digits of a number

int sumOfDigit(int num){

    int digitSum = 0;
    
    while (num > 0){
       int lastDigit = num % 10;
       num /= 10;
       digitSum += lastDigit;
    }
    return digitSum;

}

// calculate nCr binomial coefficient for n and r (my version)

int nCR(int n , int r){
    int nFact = 1;
    int rFact = 1;
    int n_rFact = 1;

    for (int i = 1; i <= n; i++) { // n factorial
        nFact *= i;
    }

    for (int j = 1; j <= r; j++) {  // r factorial
        rFact *= j;
    }
  
    int n_r = n - r;

    for (int k = 1; k <= r; k++) {  // n-r factorial
        n_rFact *= k;
    }
   
    return nFact / ( rFact * n_rFact );
}

// calculate nCr binomial coefficient for n and r 

int factorial (int n){
    int fact = 1;
    for (int i = 1; i <= n ; i++){
        fact *= i;
    } 
    return fact;
}

int nCr (int n , int r){
    int nFact = factorial(n);
    int rFact = factorial(r);
    int n_rFact = factorial(n-r);
    return nFact / ( rFact * n_rFact );

}

// calculate prime number using function

string prime(int n){

    if (n <= 1){
        return "not prime";
    } else {
        for (int i = 2 ; i * i <= n ; i++){
            if (n % i == 0){
                return "not prime";
            }
        }
    }
    return "prime";
}

//sum of n prime numbers
bool isPrime(int n){

    if (n <= 1) {
        return false;
    }

    for (int i = 2 ; i*i <= n ; i++){
        if (n % i ==0){
            return false;
        }
    }

    return true;
}

int sumOfPrimes(int num){
    int sum = 0 ;
    for (int i = 2 ; i <= num ; i++){
        if (isPrime(i)){
            sum += i;
        }

    } 
    return sum;
}

// write a function to calculate nth fibonacci number

double fibonacci (int n){
    if (n == 0 ){
        return 0;
     } 

    int first = 0;
    int second = 1; 

    for (int i = 0; i < n; i++ ){
        
        int next = first + second;
        first = second;
        second = next;
    }
    return second;
}


int main(){

    // funtion call / invoke
 
//  cout << "Minimum of two number is: " << min_of_two_numbers(4.5, 3.5) << endl;  // min of two numbers
//  cout << "sum = " << sum_of_two_numbers(1.3, 2.5) << endl; // sum of two numbers      
//  cout << "Sum on n numbers is: " << sumOfNum(49) << endl; // sum of numbers from 1 to n
//  cout << "N factorial: " << nFact(4) << endl ;  // N factorial
//  cout << sumOfDigit(1234) << endl;  // sum of digits of a number
//  cout << nCR(4 , 2) << endl;  // nCr binomial coefficient for n and r (my version)
//  cout << nCr(4 , 2) << endl;  // nCr binomial coefficient for n and r
//  cout << prime(5) << endl; // prime number checker
// cout << sumOfPrimes(10) << endl; // sum of n prime numbers
cout << fibonacci(1) << endl;  //  calculate nth fibonacci number



 return 0;
}