#include<iostream>
using namespace std;

bool is_sorted(int arr[], int n) {
    if(n == 0 || n == 1) {
        return true; // Base case: an empty array or single element is sorted
    }
    if(arr[n - 1] < arr[n - 2]) {
        return false; // If the current element is less than the previous one, it's not sorted
    }
    return is_sorted(arr, n - 1); // Recursive call with the rest of the array
}
