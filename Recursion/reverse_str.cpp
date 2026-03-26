#include<iostream>
using namespace std;

void reverse_string(string str, int start,int end) {
    if(start >= end) {
        cout << "Reversed string: " << str << endl;
        return;
    }
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call to process the remaining characters
    reverse_string(str, start + 1, end - 1);
}

int main() {
    string str = "hello";
    reverse_string(str, 0, str.length() - 1);
    return 0;
}