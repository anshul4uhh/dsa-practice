#include<iostream>
#include<vector>
using namespace std;

void print_subarrays_helper(vector<int>& arr, int start, int end) {
    if(end >= arr.size()) {
        return; // Base case: end index exceeds array size
    }
    // Print the current subarray from start to end
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Recursive call to extend the subarray by moving the end index
    print_subarrays_helper(arr, start, end + 1);
}

void print_subarrays(vector<int>& arr) {
    for(int start = 0; start < arr.size(); start++) {
        print_subarrays_helper(arr, start, start);
    }
}

int main() {
    vector<int> vec = {1, 2, 3};
    cout << "All subarrays of the given array are:" << endl;
    print_subarrays(vec);
    return 0;
}