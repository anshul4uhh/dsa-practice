#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int start = 0;
    int end= arr.size()-1;
    int target=90,index=0;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            index=1;
            cout<<target<<" found at index: "<<mid;
            break;
        }
        else if(arr[mid-1]==target){
            index=1;
            cout<<target<<" found at index: "<<mid-1;
            break;
        }
        else if(arr[mid+1]==target){
            index=1;
            cout<<target<<" found at index: "<<mid+1;
            break;
        }
        else if(arr[mid]<target)
        start = mid+2;
        else
        end=mid-2;
    }
    if(!index){
        cout<<target<<" not found in the array";
    }
    return 0;

}