#include<iostream>
#include<string>
using namespace std;
int main() {
    char str[] = "Anshul";
    int length = sizeof(str) - 1; // Subtract 1 to exclude the null terminator
    cout << "Original string: " << str << endl;
    cout << "Length of the character array: " << length << endl;
    cout << "Half Length of the character array: " << length / 2 << endl;
    // Reverse the character array
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    cout << "Reversed string: " << str << endl;
    return 0;

}
