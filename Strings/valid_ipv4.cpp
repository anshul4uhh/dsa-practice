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