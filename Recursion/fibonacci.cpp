#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0||n==1){
        return n; // Base case: fibonacci of 0 is 0 and fibonacci of 1 is 1
    }
    return fibonacci(n-1) + fibonacci(n-2); // Recursive case
     
}