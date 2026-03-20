#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string compressString_using_inplace(string s) {
    int n = s.length();
    int writeIndex = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        s[writeIndex++] = s[i];
        if (count > 1) {
            string countStr = to_string(count);
            for (char c : countStr) {
                s[writeIndex++] = c;
            }
        }
    }
    return s.substr(0, writeIndex);
}

string compressString(string s) {
    string ans="";
    int n = s.length();
    for(int i=0;i<n;i++){
        int count=1;
        while(i+1<n && s[i]==s[i+1]){
            count++;
            i++;
        }
        ans+=s[i];
        if(count>1){
            ans+=to_string(count);
        }
    }
    return ans;
}
int main() {
    string input;   
    cout << "Enter a string: ";
    getline(cin, input);
    string output = compressString(input);
    cout << "Compressed string: " << output << endl;
    return 0;
}