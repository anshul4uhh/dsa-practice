#include<iostream>
#include<cstring>
using namespace std;
void toUpperCase(char str[100]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        }
    }
}
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Original string: " << str << endl;
    toUpperCase(str);
    cout << "String in uppercase: " << str << endl;

    return 0;
}