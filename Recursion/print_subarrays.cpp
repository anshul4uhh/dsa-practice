#include<iostream>
using namespace std;

void print_subarrays(int arr[], int n, int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "All subarrays of the given array are:" << endl;
    print_subarrays(arr, n, 0, 0);
    return 0;
}