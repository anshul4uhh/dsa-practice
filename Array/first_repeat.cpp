#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
void first_repeat(vector<int>& nums){
    int n=nums.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[nums[i]]>1){
            cout<<"First repeating element is: "<<nums[i]<<" and the index is: "<<i+1<<endl;
            return;
        }
    }
}
int main(){
    vector<int> nums={1,2,3,4,3,5,6,7,8,9,10,10};
    first_repeat(nums);
}