#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0||n==1){
        return n; // Base case: fibonacci of 0 is 0 and fibonacci of 1 is 1
    }
    return fibonacci(n-1) + fibonacci(n-2); // Recursive case
}
int main(){
    int number;
    cout << "Enter a number to find its Fibonacci: ";
    cin >> number;
    if(number < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "Fibonacci of " << number << " is " << fibonacci(number) << endl;
    }
    return 0;
}