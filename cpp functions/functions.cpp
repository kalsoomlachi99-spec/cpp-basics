#include<iostream>
#include<string>
using namespace std;

// function definition

// minimum two numbers
int minOfTwoNumbers (int a, int b){

    if ( a < b ) {
        return a;
    } else {
        return b;
    }   

}

// sum of two numbers
int sumOfTwoNumbers (int a, int b){
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

long long nCR(long long n , long long r){
    long long nFact = 1;
    long long rFact = 1;
    long long n_rFact = 1;

    for (long long i = 1; i <= n; i++) { // n factorial
        nFact *= i;
    }

    for (long long j = 1; j <= r; j++) {  // r factorial
        rFact *= j;
    }
  
    long long n_r = n - r;

    for (long long k = 1; k <= n_r; k++) {  // n-r factorial
        n_rFact *= k;
    }
   
    return nFact / ( rFact * n_rFact );
}

// calculate nCr binomial coefficient for n and r 

long long factorial (int n){
    long long fact = 1;
    for (int i = 1; i <= n ; i++){
        fact *= i;
    } 
    return fact;
}

int nCr (int n , int r){
    if(r > n){
    return 0;
    }

    long long nFact = factorial(n);
    long long rFact = factorial(r);
    long long n_rFact = factorial(n-r);
    
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

int fibonacci (int n){
    if (n == 0 ) return 0;
    if (n == 1) return 1;

    int first = 0;
    int second = 1; 

    for (int i = 2; i <= n; i++ ){
        
        int next = first + second;
        first = second;
        second = next;
    }
    return second;
}


int main(){

    int a = 13;
    int b = 11;

    // funtion call / invoke
 
 cout << "Minimum of " << a << " & " << b << " is: " << minOfTwoNumbers(a, b) << endl;  // min of two numbers
 
 cout << "sum of " << a << " & " << b << " = " << sumOfTwoNumbers(a, b) << endl; // sum of two numbers      
 
 cout << "Sum of numbers from 1 to" << a << " is: " << sumOfNum(a) << endl; // sum of numbers from 1 to n
 
 cout << "Factorial of " << a << " is " << nFact(a) << endl ;  // N factorial
 
 cout << "Sum of digits of " << b << " is " << sumOfDigit(b) << endl;  // sum of digits of a number
 
 cout << "Binomial coefficient of " << a << "&"  << b << " is " << nCR(a , b) << endl;  // nCr binomial coefficient for n and r (my version)
 
 cout << "Binomial coefficient of " << a << "&"  << b << " is " << nCr(a , b) << endl;  // nCr binomial coefficient for n and r
 
 cout << a << " is a " << prime(a) << " number " << endl; // prime number checker
 
 cout << "Sum of prime numbers from 2 to " << a << " is " << sumOfPrimes(a) << endl; // sum of n prime numbers
 
 cout << "The " << a << "th fibonacci number is " << fibonacci(a) << endl;  //  calculate nth fibonacci number

 return 0;

}
