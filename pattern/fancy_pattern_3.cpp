#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    // int cnt=1;
    // cout<<"1\n";
    for(int i=1;i<=n;i++){
        int cnt= 1;
        int mid= (i*2 - 1)/2 + 1;
        for(int j=1;j<=i*2-1;j++){
            if(j==1 || j==i*2-1)
            cout<<"*";
            else if(j<mid){
                cout<<cnt;
                cnt++;
            }
            else if(j==mid){
                cout<<cnt;
            }
            else{
                cnt--;
                cout<<cnt;
            }
    }
    cout<<endl;
}
for(int i=n-1;i>=1;i--){
        int cnt= 1;
        int mid= (i*2 - 1)/2 + 1;
        for(int j=1;j<=i*2-1;j++){
            if(j==1 || j==i*2-1)
            cout<<"*";
            else if(j<mid){
                cout<<cnt;
                cnt++;
            }
            else if(j==mid){
                cout<<cnt;
            }
            else{
                cnt--;
                cout<<cnt;
            }
    }
    cout<<endl;
}

return 0;

}