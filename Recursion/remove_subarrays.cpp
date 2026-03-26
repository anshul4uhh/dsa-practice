#include<iostream>
using namespace std;

void remove_occurences(string& s, string& part){
    int index = s.find(part);
    if(index == string::npos) {
        cout << "Final string after removing all occurrences: " << s << endl;
        return; // Base case: no more occurrences found
    }
    s.erase(index, part.length()); // Remove the found occurrence
    remove_occurences(s, part); // Recursive call to check for the next occurrence
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    remove_occurences(s, part);
    return 0;
}