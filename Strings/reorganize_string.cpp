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


    
    return s;
}