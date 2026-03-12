#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

bool is_possible(vector<int>& arr, int k, int painters) {
    int count = 1; // Start with one painter
    int current_time = 0;
    
    for(int time : arr) {
        if(time > k) { // If a single board takes more time than k, it's not possible
            return false;
        }
        if(current_time + time > k) { // If adding this board exceeds the time limit
            count++; // Need another painter
            current_time = time; // Start counting time for the new painter
            if(count > painters) { // If we need more painters than available
                return false;
            }
        } else {
            current_time += time; // Add time to the current painter's workload
        }
    }
    return true; // All boards can be painted within the given time and painters
}

int min_time(vector<int>& arr, int painters) {
    int start = *max_element(arr.begin(), arr.end()); // Minimum time is the time of the longest board
    int end = accumulate(arr.begin(), arr.end(), 0); // Maximum time is the sum of all boards
    int result = -1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2; // Midpoint of the current time range
        if(is_possible(arr, mid, painters)) { // Check if it's possible to paint with mid time
            result = mid; // Store the last valid time
            end = mid - 1; // Try to find a smaller time
        } else {
            start = mid + 1; // Need more time
        }
    }
    return result; // Return the minimum time found
}
int main() {
    vector<int> arr{5,10,30,20,15}; // Time taken for each board
    int painters = 3; // Number of painters available
    cout << "Minimum time to paint all boards: " << min_time(arr, painters) << endl;
    return 0;
}