#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char str[100]) {
    int left = 0;
    int right = strlen(str) - 1;
    bool del = false;
    while (left < right) {
        if (str[left] != str[right] && del) {
            return false; // Not a palindrome
        }
        if (str[left] != str[right] && !del) {
            del=true;//ignoring one char only
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}