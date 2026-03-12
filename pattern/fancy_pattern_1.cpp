#include<iostream>
using namespace std;
int main(){
    int n;
    int col=17;
    int mid = col/2+1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=col;j++){
            if(j>=mid-i+1 && j<=mid+i-1){
                if(i%2==0){
                    if(j%2==0){
                        cout<<i;
                    }
                    else{
                        cout<<"*";
                    }
                }
                else{
                    if(j%2==0){
                        cout<<"*";
                    }
                    else{
                        cout<<i;
                    }
            }    }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}