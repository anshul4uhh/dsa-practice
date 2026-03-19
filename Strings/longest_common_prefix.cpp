#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];
        int l1 = first.length();
        int l2 = last.length();
        int mini = min(l1,l2);
        int count = 0;
        while(count<mini){
            if(first[count]!=last[count]){
                break;
            }
            else{
                count++;
            }
        }
        if(count==0) return "";
        return first.substr(0,count);
    }
int main() {
    int n;  
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading n
    vector<string> strs(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, strs[i]);
    }
    string output = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << output << endl;
    return 0;
}