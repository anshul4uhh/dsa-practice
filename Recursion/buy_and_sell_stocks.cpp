#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void buy_and_sell_stocks_helper(vector<int>& prices, int index, int&buy_price, int&profit) {
    if(index >= prices.size()) {
        cout << "Profit: " << profit << endl; // Base case: end of price list
        return;
    }
    if(prices[index]<buy_price) buy_price = prices[index]; // Update buy price if current price is lower
    else profit = max(profit, prices[index] - buy_price); // Update profit if selling at current price is better
    buy_and_sell_stocks_helper(prices, index + 1, buy_price, profit); // Recursive call to check next price
}
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int buy_price = INT_MAX; // Initialize buy price to maximum
    int profit = INT_MIN; // Initialize profit to minimum
    cout << "Calculating maximum profit from stock prices..." << endl;
    buy_and_sell_stocks_helper(prices, 0, buy_price, profit);
    return 0;
}