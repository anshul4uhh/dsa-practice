#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,3,4,5,3,2,1};
    int start = 0;
    int end= arr.size()-1;
    while(start<end){
        int mid = start + (end - start)/2;
        if(arr[mid]< arr[mid+1])
        start=mid+1;
        else
        end=mid;
    }
    cout<<"The peak element is "<<arr[start];
    return 0;

}