#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the size of segment: ";
    cin>>k;
    int ans = INT_MIN;
    for(int i=0;i<n-k;i++){
        int mini = INT32_MAX;
        for(int j=i;j<i+k;j++){
            mini = min(mini,arr[j]);
        }
        ans = max(mini,ans);
    }
    cout<<"ans: "<<ans;
    return 0;
}