#include<iostream>
#include<vector>
using namespace std;
void house_robbery_helper(vector<int>& houses, int index, int current_profit, int& max_profit) {
    if(index >= houses.size()) {
        max_profit = max(max_profit, current_profit); // Base case: end of house list
        return;
    }
    // Case 1: Rob the current house and skip the next one
    house_robbery_helper(houses, index + 2, current_profit + houses[index], max_profit);
    // Case 2: Skip the current house and move to the next one
    house_robbery_helper(houses, index + 1, current_profit, max_profit);
}
int main() {
    vector<int> houses = {2, 7, 9, 3, 1};
    int max_profit = 0; // Initialize max profit to zero
    cout << "Calculating maximum profit from robbing houses..." << endl;
    house_robbery_helper(houses, 0, 0, max_profit);
    cout << "Maximum profit that can be robbed: " << max_profit << endl;
    return 0;
}