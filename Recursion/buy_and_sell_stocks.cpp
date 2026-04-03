#include<iostream>
#include<vector>
using namespace std;

void buy_and_sell_stocks_helper(vector<int>& prices, int index, int buy_price, int profit) {
    if(index >= prices.size()) {
        cout << "Profit: " << profit << endl; // Base case: end of price list
        return;
    }
    if(prices[index]<buy_price) buy_price = prices[index]; // Update buy price if current price is lower
    else profit = max(profit, prices[index] - buy_price); // Update profit if selling at current price is better
    
}