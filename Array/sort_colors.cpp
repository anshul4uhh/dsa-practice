#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int zero=0,one=0,two=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
        zero++;
        else if(nums[i]==1)
        one++;
        else
        two++;
    }
    for(int i=0;i<nums.size();i++){
        if(zero)
        {
            nums[i]=0;
            zero--;
        }
        else if(one)
        {
            nums[i]=1;
            one--;
        }
        else
        nums[i]=2;
    }

}
void sortColors2(vector<int>& nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
        mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors2(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}