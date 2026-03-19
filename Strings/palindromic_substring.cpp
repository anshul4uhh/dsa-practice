#include<iostream>
#include<string>    
using namespace std;

int expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; // Length of the palindrome
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