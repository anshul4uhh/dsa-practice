#include<iostream>
#include<string>
using namespace std;
int main() {
    char str[] = "Hello, World!";
    int length = sizeof(str) - 1; // Subtract 1 to exclude the null terminator
    cout << "Original string: " << str << endl;
    cout << "Length of the character array: " << length << endl;
    // Replace spaces with underscores
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }
    cout << "String after replacing spaces:- " << str << endl;

    return 0;
}