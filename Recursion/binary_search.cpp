#include<iostream>
using namespace std;

int binary_search(int arr[], int left, int right, int target) {
    if(left > right) {
        return -1; // Base case: target not found
    }
    int mid = left + (right - left) / 2; // Calculate the middle index
    if(arr[mid] == target) {
        return mid; // Target found at index mid
    }
    if(arr[mid] > target) {
        return binary_search(arr, left, mid - 1, target); // Search in the left half
    }
    return binary_search(arr, mid + 1, right, target); // Search in the right half
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int result = binary_search(arr, 0, n - 1, target);
    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}