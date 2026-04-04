#include<iostream>
#include<vector>
using namespace std;

int mincost_tickets_helper(vector<int>& days, vector<int>& costs, int index) {
    if(index >= days.size()) return 0; // Base case: all days covered
    int cost1 = costs[0] + mincost_tickets_helper(days, costs, index + 1); // Cost for 1-day ticket
    int cost7 = costs[1] + mincost_tickets_helper(days, costs, index + 7); // Cost for 7-day ticket
    int cost30 = costs[2] + mincost_tickets_helper(days, costs, index + 30); // Cost for 30-day ticket
    return min(cost1, min(cost7, cost30)); // Return the minimum cost among the three options
}
