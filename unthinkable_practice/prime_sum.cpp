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
    cout<<"emter value of first range: ";
    cin>>n;
    int m;
    cout<<"emter value of 2nd range: ";
    cin>>m;
    vector<int>prime(m+1,1);
    mark_prime(m,prime);
    int sum=0;
    for(int i=n;i<=m;i++){
        if(i>=n && prime[i] && i<=m) {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<endl<<"sum: "<<sum;
    return 0;
}
