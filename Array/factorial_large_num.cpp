#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> factorial_large_num(int n){
    vector<int> result(1,1);
    for(int i=2;i<=n;i++){
        int carry=0;
        for(int j=0;j<result.size();j++){
            int prod=result[j]*i+carry;
            result[j]=prod%10;
            carry=prod/10;
        }
        while(carry){
            result.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){
    int n=5;
    vector<int> result=factorial_large_num(n);
    cout<<n<<"! = ";
    for(int digit:result){
        cout<<digit;
    }
    cout<<endl;
}