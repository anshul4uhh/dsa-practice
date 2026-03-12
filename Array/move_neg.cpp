#include<iostream>
#include<vector>
using namespace std;
void moveNeg(vector<int>& nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main(){
    vector<int> nums={-1,2,-3,4,5,-6};
    moveNeg(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}