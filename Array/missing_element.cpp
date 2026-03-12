#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,5,6,7,8};
    int start = 0;
    int end= arr.size()-1;
    int index=-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]!=mid+1){
            index=mid;
            end=mid-1;
        }
        else
        start = mid+1;
    }
    cout<<"The missing element is "<<index+1;
    return 0;

}