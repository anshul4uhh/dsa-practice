#include<iostream>
#include<vector>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Index of smaller element

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) { // If current element is smaller than pivot
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap the elements
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at index i + 1
    return i + 1; // Return the partitioning index
}
void quickSort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high); // Partitioning index

        quickSort(arr, low, pi - 1); // Recursively sort elements before partition
        quickSort(arr, pi + 1, high); // Recursively sort elements after partition
    }
}
int main() {
    vector<int> arr = {10, 7, 8, 9, 1,1,1,1,3,3,3,4,6,6, 5}; // Sample array to sort
    int n = arr.size();

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1); // Sort the array using quicksort

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}