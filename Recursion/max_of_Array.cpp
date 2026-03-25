#include<iostream>
using namespace std;

void find_max(int arr[], int n, int& max) {
    if(n == 0) {
        return; // Base case: no elements to compare
    }
    if(arr[n - 1] > max) {
        max = arr[n - 1]; // Update max if current element is greater
    }
    find_max(arr, n - 1, max); // Recursive call with the rest of the array
}

int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0]; // Initialize max with the first element
    find_max(arr, n, max);
    cout << "Maximum element in the array: " << max << endl;
    return 0;
}