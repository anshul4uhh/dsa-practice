#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows = arr.size();
    int cols = arr[0].size();
    int target=21;
    int s=0;
    int e= rows*cols -1;
    bool isFind = false;
    while(s<=e){
        int mid = s + (e-s)/2;
        int rI = mid/cols;
        int cI = mid%cols;
        if(arr[rI][cI]==target){
            cout<<target<<" found at index: "<<rI<<","<<cI;
            isFind = true;
            break;
        }
        else if(arr[rI][cI]<target)
            s=mid+1;
        else
            e=mid-1;
    }
    if(!isFind){
        cout<<target<<" not found in the matrix";
    }
    return 0;
}