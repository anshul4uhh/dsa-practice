#include<iostream>
#include<string>
using namespace std;
int main() {
    string input;   
    cout << "Enter a string: ";
    getline(cin, input);
    int i=0,n=input.length();
    while(i<n && input[i]==' ') i++;
    
    return 0;
}