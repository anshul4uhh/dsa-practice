#include<iostream>
#include<string>    
using namespace std;

string expandAroundCenter(const string& s, int left, int right) {
    int count = 0;
    string longestPalindrome;
    int maxLength = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
            longestPalindrome = s.substr(left, currentLength);
        }
        left--;
        right++;
    }
    cout << "Longest palindromic substring: " << longestPalindrome << endl;
    return longestPalindrome;
}

int countPalindromicSubstrings(const string& s) {
    string longestPalindromeOverall;
    string longestPalindrome_odd;
    string longestPalindrome_even;
    for (int i = 0; i < s.length(); i++) {
        // Odd length palindromes
        longestPalindrome_odd = expandAroundCenter(s, i, i);
        // Even length palindromes
        longestPalindrome_even = expandAroundCenter(s, i, i + 1);
    }
    if(longestPalindrome_odd.length() > longestPalindrome_even.length()) {
        longestPalindromeOverall = longestPalindrome_odd;
    } else {
        longestPalindromeOverall = longestPalindrome_even;
    }
    cout << "Longest palindromic substring overall: " << longestPalindromeOverall << endl;
    
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