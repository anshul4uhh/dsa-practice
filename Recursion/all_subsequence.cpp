#include<iostream>
using namespace std;

void generate_subsequences(string str, string current, int index) {
    if(index == str.length()) {
        cout << current << endl; // Base case: print the current subsequence
        return;
    }
    // Include the current character and move to the next index
    generate_subsequences(str, current + str[index], index + 1);
    // Exclude the current character and move to the next index
    generate_subsequences(str, current, index + 1);
}