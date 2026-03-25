#include<iostream>
using namespace std;

void reverse_counting(int n) {
    if(n < 0) {
        return; // Base case: stop when n is negative
    }
    cout << n << " "; // Print the current number
    reverse_counting(n - 1); // Recursive call with n decremented by 1
}
int main() {
    int number;
    cout << "Enter a number to start reverse counting: ";
    cin >> number;
    cout << "Reverse counting from " << number << ": ";
    reverse_counting(number);
    cout << endl; // Print a newline after counting
    return 0;
}