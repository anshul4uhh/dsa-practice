#include<iostream>
#include<vector>
using namespace std;

int numRollsToTarget_helper(int n, int k, int target) {
    if(target == 0) return 1; // Base case: exact target achieved
    if(target < 0) return 0; // Base case: target cannot be negative
    int count = 0;
    for(int i = 1; i <= k; i++) {
        count += numRollsToTarget_helper(n - 1, k, target - i); // Recursive call for remaining dice and reduced target
    }
    return count;
}
int numRollsToTarget(int n, int k, int target) {
    return numRollsToTarget_helper(n, k, target); // Start the recursive helper function
}
int main() {
    int n = 2; // Number of dice
    int k = 6; // Number of faces on each die
    int target = 7; // Target sum to achieve
    cout << "Calculating number of ways to roll " << n << " dice with " << k << " faces to achieve target " << target << "..." << endl;
    int result = numRollsToTarget(n, k, target);
    cout << "Number of ways to achieve the target: " << result << endl;
    return 0;
}