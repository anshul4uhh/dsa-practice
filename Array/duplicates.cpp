#include<iostream>
#include<vector>
using namespace std;
void find_duplicates(vector<int>& nums){
    int ans=0;
    int n=nums.size()-1;
    int sum = n*(n+1)/2;

    for(int i=0;i<nums.size();i++){
        ans+=nums[i];
    }
    cout<<"Duplicate element is: "<<ans-sum;
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10,10};
    find_duplicates(nums);
}