#include<iostream>
using namespace std;

void add_strings(string str1, string str2, string result, int index1, int index2, int carry) {
    

    add_strings(str1, str2, result, index1 + 1, index2 + 1, carry); // Recursive call for the next digits
}

int main() {
    string str1 = "123";
    string str2 = "456";
    string result = "";
    int carry = 0;
    add_strings(str1, str2, result, str1.length() - 1, str2.length() - 1, carry);
    return 0;
}