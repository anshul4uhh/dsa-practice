#include<iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}

void generate_subsequences(string str, string output, int index) {
    if(index >= str.length()) {
        if(isPalindrome(output)) {
            cout << output << endl; // Print the current subsequence if it's a palindrome
        }
        return;
    }
    // Include the current character and move to the next index
    generate_subsequences(str, output, index + 1);
    output.push_back(str[index]); // Add the current character to the output
    // Exclude the current character and move to the next index
    generate_subsequences(str, output, index + 1);
}

int main() {
    string str = "abc";
    generate_subsequences(str, "", 0);
    return 0;
}