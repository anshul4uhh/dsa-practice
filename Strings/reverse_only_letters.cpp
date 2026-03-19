#include<iostream>
#include<string>
using namespace std;

string reverseOnlyLetters(string s) {
        int n = s.length();
        int l=0,r=n-1;
        while(l<r){
            if(isalpha(s[l]) && isalpha(s[r])){
                char temp = s[l];
                s[l]=s[r];
                s[r]=temp;
                l++,r--;
            }
            else{
                if(!isalpha(s[l])) l++;
                else r--;
            }
        }
        return s;
    }

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Original string: " << input << endl;
    