#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
string reorganizeString(string s) {
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    
    vector<pair<char, int>> charFreq(charCount.begin(), charCount.end());
    sort(charFreq.begin(), charFreq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });
    
    if (charFreq[0].second > (s.length() + 1) / 2) {
        return "";
    }
    
    string result(s.length(), ' ');
    int index = 0;
    
    for (const auto& pair : charFreq) {
        char c = pair.first;
        int count = pair.second;
        
        for (int i = 0; i < count; i++) {
            result[index] = c;
            index += 2;
            if (index >= s.length()) {
                index = 1;
            }
        }
    }
    
    return result;
}