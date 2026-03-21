#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;
    
    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        anagramMap[sortedStr].push_back(str);
    }
    
    vector<vector<string>> result;
    for (const auto& pair : anagramMap) {
        result.push_back(pair.second);
    }
    
    return result;
}

int main() {
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> groupedAnagrams = groupAnagrams(input);
    
    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : groupedAnagrams) {
        for (const string& str : group) {
            cout << str << " ";
        }
        cout << endl;
    }
    
    return 0;
}