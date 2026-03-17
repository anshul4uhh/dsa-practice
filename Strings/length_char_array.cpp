#include<iostream>
#include<string>
using namespace std;
int main() {
    char str[] = "Hello, World!";
    int length1 = sizeof(str) - 1; // Subtract 1 to exclude the null terminator
    cout << "Length of the character array: " << length1 << endl;
    int length2 = 0;
    while(str[length2] != '\0') {
        length2++;
    }
    cout << "Length of the character array (calculated manually): " << length2 << endl;
    return 0;
}