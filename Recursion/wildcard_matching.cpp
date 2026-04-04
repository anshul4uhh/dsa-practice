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
bool wildcard_matching(const string& s, const string& p) {
    return wildcard_matching_helper(s, p, 0, 0); // Start the recursive helper function
}
int main() {
    string s = "adceb"; // Input string
    string p = "*a*b"; // Pattern with wildcards
    cout << "Checking if the string \"" << s << "\" matches the pattern \"" << p << "\"..." << endl;
    bool result = wildcard_matching(s, p);
    cout << "Does the string match the pattern? " << (result ? "Yes" : "No") << endl;
    return 0;
}