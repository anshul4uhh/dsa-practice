#include<iostream>
#include<vector>
using namespace std;

void buy_and_sell_stocks_helper(vector<int>& prices, int index, int buy_price, int profit) {
    if(index >= prices.size()) {
        cout << "Profit: " << profit << endl; // Base case: end of price list
        return;
    }
    // Option 1: Buy stock at current price
    if(buy_price == -1) { // Only buy if we haven't bought yet
        buy_and_sell_stocks_helper(prices, index + 1, prices[index], profit);
    }
    // Option 2: Sell stock at current price
    if(buy_price != -1) { // Only sell if we have bought
        buy_and_sell_stocks_helper(prices, index + 1, -1, profit + (prices[index] - buy_price));
    }
    // Option 3: Skip current price
    buy_and_sell_stocks_helper(prices, index + 1, buy_price, profit);
}