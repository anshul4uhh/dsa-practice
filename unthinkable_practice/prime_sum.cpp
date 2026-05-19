#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mark_prime(int n,vector<int>&prime){
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            int j=i*2;
            while(j<=n){
                prime[j]=0;
                j+=i;
            }
        }
    }
}

int main(){
    int n;
    cout<<"emter value of n: ";
    cin>>n;
    vector<int>prime(n+1,1);
    mark_prime(n,prime);
    for(int i=0;i<=n;i++){
        if(prime[i]) cout<<i<<" ";
    }
    return 0;
}
