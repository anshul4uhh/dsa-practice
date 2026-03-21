#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
string reorganizeString(string s) {
    int charCount[26] = {0};
    for (char c : s) {
        charCount[c - 'a']++;
    }
    int maxCount = 0;
    char maxChar;
    for (int i = 0; i < 26; i++) {
        if (charCount[i] > maxCount) {
            maxCount = charCount[i];
            maxChar = 'a' + i;
        }
    }
    int index=0;
    while(maxCount>0 && index<s.size()){
        s[index] = maxChar;
        maxCount--;
        index+=2;
    }
    if (maxCount != 0) {
        return "";
    }
    charCount[maxChar - 'a']=0;
    for(int i = 0; i < 26; i++) {
        while(charCount[i] > 0) {
            index = (index >= s.length()) ? 1 : index; 
            s[index] = 'a' + i;
            index+=2;
            charCount[i]--;
        }
    }
    return s;
    }
int main() {
    string input = "aaab";
    string result = reorganizeString(input);
    if (result.empty()) {
        cout << "Cannot reorganize the string." << endl;
    } else {
        cout << "Reorganized string: " << result << endl;
    }
    return 0;
}