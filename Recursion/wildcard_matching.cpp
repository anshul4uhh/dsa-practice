#include<iostream>
#include<vector>
using namespace std;

bool wildcard_matching_helper(const string& s, const string& p, int i, int j) {
    if(j == p.size()) return i == s.size(); // Base case: pattern is fully matched
    if(p[j] == '*') { // Handle '*' wildcard
        return wildcard_matching_helper(s, p, i, j + 1) || (i < s.size() && wildcard_matching_helper(s, p, i + 1, j)); // Match zero or more characters
    }
    if(i < s.size() && (p[j] == '?' || p[j] == s[i])) { // Handle '?' wildcard or exact match
        return wildcard_matching_helper(s, p, i + 1, j + 1); // Move to the next character in both strings
    }
    return false; // No match found
}
