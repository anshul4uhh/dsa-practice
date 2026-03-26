#include<iostream>
using namespace std;

void reverse_string(string str, string output, int index) {
    int n = str.length();
    if(index >= n) {
        cout << "Reversed string: " << output << endl;
        return;
    }
    // Recursive call to process the next character
    reverse_string(str, output, index + 1);
    output.push_back(str[index]); // Add the current character to the output after the recursive call
}
