#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int cnt=1;
    // cout<<"1\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i*2-1;j++){
            if(j%2==0)
            cout<<"*";
            else{
                cout<<cnt;
                cnt++;
            }
    }
    cout<<endl;
}
    int start=cnt-n;
    for(int i=1;i<=n;i++){
        int cnt2=start;
        for(int j=1;j<=(n*2 - 2*(i-1) - 1);j++){
            if(j%2==0)
            cout<<"*";
            else{
                cout<<cnt2;
                cnt2++;
            } 
    }
    start=start- (n*2 - 2*(i-1) - 1)/2;
    cout<<endl;
}

return 0;

}