#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,1,1,3,4,4,4,5,6,9,10};
    int start = 0;
    int end= arr.size()-1;
    int target=1,index=-1;
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
    cout<<"The First occurence of element "<<target<<" is present at index: "<<index;
    return 0;

}