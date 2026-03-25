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