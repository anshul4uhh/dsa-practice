#include<iostream>
#include<string>
using namespace std;
int main() {
    char str[] = "Hello, World!";
    int length = sizeof(str) - 1; // Subtract 1 to exclude the null terminator
    cout << "Length of the character array: " << length << endl;
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    cout << "Length of the character array (calculated manually): " << length << endl;

    return 0;
}