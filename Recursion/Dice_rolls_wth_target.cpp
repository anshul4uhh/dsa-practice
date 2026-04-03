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
