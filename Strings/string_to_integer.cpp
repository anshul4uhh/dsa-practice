#include<iostream>
#include<string>
using namespace std;
int main() {
    string input;   
    cout << "Enter a string: ";
    getline(cin, input);
    int i=0,n=input.length();
    while(i<n && input[i]==' ') i++;
    int sign=1;
    if(i<n && (input[i]=='+' || input[i]=='-')){
        if(input[i]=='-') sign = -1;
        i++;
    }
    while(i<n && isdigit(input[i])){
        
    }
    return 0;
}