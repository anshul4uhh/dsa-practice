#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid; // Size of right subarray

    vector<int> L(n1), R(n2); // Temporary arrays for left and right subarrays

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i]; // Copy data to left subarray
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j]; // Copy data to right subarray

    int i = 0, j = 0, k = left; // Initial indices for merging

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k++] = L[i++]; // Add from left subarray
        } else {
            arr[k++] = R[j++]; // Add from right subarray
        }
    }

    while(i < n1) {
        arr[k++] = L[i++]; // Add remaining elements from left subarray
    }

    while(j < n2) {
        arr[k++] = R[j++]; // Add remaining elements from right subarray
    }
}
void mergeSort(vector<int>& arr, int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2; // Find the midpoint

        mergeSort(arr, left, mid); // Sort the left half
        mergeSort(arr, mid + 1, right); // Sort the right half

        merge(arr, left, mid, right); // Merge the sorted halves
    }
}