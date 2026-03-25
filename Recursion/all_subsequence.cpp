#include<iostream>
using namespace std;

void generate_subsequences(string str, string output, int index) {
    if(index >= str.length()) {
        cout << output << endl; // Base case: print the current subsequence
        return;
    }
    // Include the current character and move to the next index
    generate_subsequences(str, output + str[index], index + 1);
    // Exclude the current character and move to the next index
    generate_subsequences(str, output, index + 1);
}