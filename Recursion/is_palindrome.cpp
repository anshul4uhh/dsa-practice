#include<iostream>
using namespace std;

bool is_palindrome(string str, int left, int right) {
    if(left >= right) {
        return true; // Base case: all characters matched
    }
    if(str[left] != str[right]) {
        return false; // Not a palindrome
    }
    // Recursive call to check the next pair of characters
    return is_palindrome(str, left + 1, right - 1);
}

int main() {
    string str = "madam";
    if(is_palindrome(str, 0, str.length() - 1)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}