#include<iostream>
using namespace std;

void print_subarrays(int arr[], int n, int start, int end) {
    if(end == n) {
        return; // Base case: reached the end of the array
    }
    if(start > end) {
        print_subarrays(arr, n, 0, end + 1); // Move to the next subarray
        return;
    }
    // Print the current subarray from start to end
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    print_subarrays(arr, n, start + 1, end); // Move to the next starting index
}

