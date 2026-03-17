#include<iostream>
using namespace std;
int main(){

    int arr[10];
    cout<<"Enter 10 elements: ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"The odd elements in the array are: ";
    for(int i=0;i<10;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}