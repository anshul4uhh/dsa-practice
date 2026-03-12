#include<iostream>
#include<vector>
using namespace std;
void find_intersection(vector<int>& nums1, vector<int>& nums2,vector<int>& nums3){
    int n1=nums1.size();
    int n2=nums2.size();
    int n3=nums3.size();
    int i=0,j=0,k=0;
    vector<int> ans;
    
    while(i<n1 && j<n2 && k<n3){
        if(nums1[i]==nums2[j] && nums2[j]==nums3[k]){
            ans.push_back(nums1[i]);
            i++;
            j++;
            k++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums2[j]<nums3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    cout<<"Intersection of three arrays is: ";
    int m=ans.size();
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<int> nums1={1,5,10,20,40,80};
    vector<int> nums2={6,7,20,80,100};
    vector<int> nums3={3,4,15,20,30,70,80,120};
    find_intersection(nums1,nums2,nums3);
}