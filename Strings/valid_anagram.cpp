#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }
    int count[256] = {0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}
int main() {
    string s, t;
    cout << "Enter the first string: ";
    getline(cin, s);
    cout << "Enter the second string: ";
    getline(cin, t);
    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}