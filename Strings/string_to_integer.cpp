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
    long result = 0;
    while(i<n && isdigit(input[i])){
        result = result*10 + (input[i] - '0');
        if(sign*result<INT_MIN) return INT_MIN;
    }
    return 0;
}