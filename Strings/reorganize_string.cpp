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
    if (maxCount > (s.length() + 1) / 2) {
        return "";
    }
    int index = 0;
    for(int i = 0; i < 26; i++) {
        while(charCount[i] > 0) {
            index = (index >= s.length()) ? 1 : index; // Switch to odd indices after filling even ones
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