#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int dividend=13,divisor=2;
    int start=divisor,end=dividend,ans=0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(divisor*mid<=dividend){   
            ans = mid;     
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"Quotient of "<<dividend<<" / "<<divisor<<" is "<<ans;
}