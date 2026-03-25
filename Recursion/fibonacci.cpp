#include<iostream>
using namespace std;

void fibonacci(int n){
    if(n==0||n==1){
        cout<<n<<" ";
        return;
    }
    fibonacci(n-1);
    cout<<n<<" ";
    fibonacci(n-2); 
}