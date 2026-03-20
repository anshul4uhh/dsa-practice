#include<iostream>
#include<string>
using namespace std;

string convert(string s, int numRows) {
        if(numRows==1) return s;
        string ans="";
        int n = s.length();
        for(int i=0;i<numRows;i++){
            for(int j=i;j<n;j+=2*numRows-2){
                ans+=s[j];
                if(i!=0 && i!=numRows-1 && j+2*numRows-2-2*i<n){
                    ans+=s[j+2*numRows-2-2*i];
                }
            }
        }
        return ans;
    }

int main() {
    string input;   
    cout << "Enter a string: ";
    getline(cin, input);
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    string output = convert(input, numRows);
    cout << "Zigzag converted string: " << output << endl;
    return 0;
}