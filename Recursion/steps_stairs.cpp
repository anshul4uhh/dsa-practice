#include<iostream>
using namespace std;


int count_ways(int n) {
    if(n == 0 || n == 1) {
        return 1; // Base case: there's one way to climb zero or one step
    }
    if(n < 0) {
        return 0; // Base case: no way to climb negative steps
    }
    return count_ways(n - 1) + count_ways(n - 2); // Recursive case: sum of ways to climb n-1 and n-2 steps
}
int main() {
    int steps;
    cout << "Enter the number of steps: ";
    cin >> steps;
    cout << "Number of ways to climb " << steps << " steps: " << count_ways(steps) << endl;
    return 0;
}