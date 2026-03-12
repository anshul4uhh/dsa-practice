#include<iostream>
#include<vector>
using namespace std;
void wave_print(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<matrix[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<matrix[j][i]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>> matrix={{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}};
    wave_print(matrix);
}