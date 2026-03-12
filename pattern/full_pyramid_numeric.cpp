#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int inc = 1;
        int dec = i-1;
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>=n-i+1 && j<=n){
                cout<<inc<<" ";
                inc++;
            }
            else if(j>n && j<=n+i-1){
                cout<<dec<<" ";
                dec--;
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}