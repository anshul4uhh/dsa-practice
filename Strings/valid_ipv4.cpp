#include<iostream>
#include<cstring>
using namespace std;

bool isValidIPv4(char str[100]) {
    int num, dots = 0;
    char *ptr = strtok(str, ".");

    while (ptr != nullptr) {
        if (!isdigit(*ptr)) {
            return false; // Not a valid number
        }
        num = atoi(ptr);
        if (num < 0 || num > 255) {
            return false; // Number out of range
        }
        dots++;
        ptr = strtok(nullptr, ".");
    }
    return dots == 4; // Valid IPv4 should have exactly 4 parts
}

int main() {
    char str[100];
    cout << "Enter an IPv4 address: ";
    cin.getline(str, 100);

    if (isValidIPv4(str)) {
        cout << "The IPv4 address is valid." << endl;
    } else {
        cout << "The IPv4 address is invalid." << endl;
    }

    return 0;
}