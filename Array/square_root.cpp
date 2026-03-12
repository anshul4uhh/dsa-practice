#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. you find square-root: ";
    cin>>n;
    int start=1,end=n,ans=0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid <= n/mid){   
            ans = mid;     
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"Square root of "<<n<<" is "<<ans;
}