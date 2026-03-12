#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {

    int left = 0;
    int right = arr.size() - k;

    while(left < right){

        int mid = left + (right-left)/2;

        if(x - arr[mid] > arr[mid+k] - x)
            left = mid + 1;
        else
            right = mid;
    }

    return vector<int>(arr.begin()+left, arr.begin()+left+k);
}

vector<int> findClosestElements2(vector<int>& arr, int k, int x) {

    int n = arr.size();
    
    int right = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int left = right - 1;

    while(k--) {

        if(left < 0)
            right++;
        else if(right >= n)
            left--;
        else if(abs(arr[left] - x) <= abs(arr[right] - x))
            left--;
        else
            right++;
    }

    return vector<int>(arr.begin()+left+1 , arr.begin()+right);
}
int main() {
    vector<int> arr{1,2,3,4,5};
    int k = 4;
    int x = 3;
    vector<int> result = findClosestElements2(arr, k, x);
    cout << "The " << k << " closest elements to " << x << " are: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}