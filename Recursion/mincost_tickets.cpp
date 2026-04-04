#include<iostream>
#include<vector>
using namespace std;

int mincost_tickets_helper(vector<int>& days, vector<int>& costs, int index) {
    if(index >= days.size()) return 0; // Base case: all days covered
    int cost1 = costs[0] + mincost_tickets_helper(days, costs, index + 1); // Cost for 1-day ticket
    int j = index; // Find the next index after 7 days
    while(j < days.size() && days[j] < days[index] + 7) {
        j++;
    }
    int cost7 = costs[1] + mincost_tickets_helper(days, costs, j); // Cost for 7-day ticket
    j = index; // Find the next index after 30 days
    while(j < days.size() && days[j] < days[index] + 30) {
        j++;
    }
    int cost30 = costs[2] + mincost_tickets_helper(days, costs, j); // Cost for 30-day ticket
    return min(cost1, min(cost7, cost30)); // Return the minimum cost among the three options
}
int mincost_tickets(vector<int>& days, vector<int>& costs) {
    return mincost_tickets_helper(days, costs, 0); // Start the recursive helper function
}
int main() {
    vector<int> days = {2,30}; // Days on which travel is planned
    vector<int> costs = {1,4,25}; // Costs for 1-day, 7-day, and 30-day tickets
    cout << "Calculating minimum cost for travel tickets..." << endl;
    int result = mincost_tickets(days, costs);
    cout << "Minimum cost to cover all travel days: " << result << endl;
    return 0;
}