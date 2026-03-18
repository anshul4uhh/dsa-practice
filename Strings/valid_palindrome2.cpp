#include<iostream>
#include<cstring>
using namespace std;
bool isPal(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right){
            if(s[left] != s[right]){
                return isPal(s, left+1, right) || isPal(s, left, right-1);
            }
            left++;
            right--;
        }

        return true;
    }
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    if (validPalindrome(str)) {
        cout << "The string is a palindrome after deleting at most one char." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}