#include<iostream>
#include<string>
using namespace std;
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