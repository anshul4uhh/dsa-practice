#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printKDiffPairs(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicates
        int target = arr[i] + k;
        if (binary_search(arr.begin() + i + 1, arr.end(), target)) {
            count++;
            cout << "(" << arr[i] << ", " << target << ")" << endl;
        }
    }
    cout << "Total unique pairs with difference " << k << ": " << count << endl;
}
int main() {
    vector<int> arr{1,1,1,1,2,2,3,4,5,6,7,8,9,10};
    int k = 0;
    printKDiffPairs(arr, k);
    return 0;
}