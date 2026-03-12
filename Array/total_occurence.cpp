#include<iostream>
#include<vector>
using namespace std;

int first_occurence(vector<int>&arr,int target){
    int start = 0;
    int end= arr.size()-1;
    int index=-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            index=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        start = mid+1;
        else
        end=mid-1;
    }
    return index;
}

int last_occurence(vector<int>&arr,int target){
    int start = 0;
    int end= arr.size()-1;
    int index=-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            index=mid;
            start = mid+1;
        }
        else if(arr[mid]<target)
        start = mid+1;
        else
        end=mid-1;
    }
    return index;
}

int main(){
    vector<int>arr{1,1,1,3,4,4,4,5,6,9,10};
    int target=10;
    int index1=first_occurence(arr,target);
    int index2=last_occurence(arr,target);
    cout<<"Total occurence of element "<<target<<" is : "<<index2 - index1 + 1;
}