#include<iostream>
#include<vector>
using namespace std;
void find_missing(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int index=abs(nums[i]);
        if(nums[index-1]>0){
            nums[index-1]=-nums[index-1];
        }
        
    }
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            cout<<"Missing element is: "<<i+1<<endl;
        }
    }
}
int main(){
    vector<int> nums={1,3,5,3,4,4};
    find_missing(nums);
}