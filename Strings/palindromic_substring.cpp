#include<iostream>
#include<string>    
using namespace std;

int expandAroundCenter(const string& s, int left, int right) {
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count; 
}

int countPalindromicSubstrings(const string& s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        // Odd length palindromes
        count += expandAroundCenter(s, i, i);
        // Even length palindromes
        count += expandAroundCenter(s, i, i + 1);
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Original string: " << input << endl;
    int output = countPalindromicSubstrings(input);
    cout << "Number of palindromic substrings: " << output << endl;

    return 0;
}