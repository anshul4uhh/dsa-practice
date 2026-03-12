#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long difference_sum(vector<int>& arr, int k) {
    long long sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > k) 
        sum += arr[i]-k;
    }
    return sum;
}

void cutter_height(vector<int>& arr, int target) {
    int start = *min_element(arr.begin(), arr.end());
    int end = *max_element(arr.begin(), arr.end());
    int result = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        long long sum = difference_sum(arr, mid);
        if(sum == target) {
            cout << "Cutter height: " << mid << endl;
            return;
        }
        else if(sum < target) {
            end = mid - 1;
            result = mid; // Store the last valid height
        }
        else {
            start = mid + 1;
        }
    }
    if(result != -1) {
        cout << "Cutter height: " << result << endl;
    } else {
        cout << "No valid cutter height found." << endl;
    }
}
int main() {
    vector<int> arr{20, 15, 10, 17};
    int target = 7;
    cutter_height(arr, target);
    return 0;
}