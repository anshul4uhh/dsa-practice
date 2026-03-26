#include<iostream>
using namespace std;

void add_strings(string str1, string str2, string result, int index1, int index2, int carry) {
    if(index1 < 0 && index2 < 0 && carry == 0) {
        cout << "Sum of the two strings: " << result << endl;
        return; // Base case: both strings are processed and no carry left
    }
    int digit1 = (index1 >= 0) ? str1[index1] - '0' : 0; // Get digit from str1 or 0 if index is out of bounds
    int digit2 = (index2 >= 0) ? str2[index2] - '0' : 0; // Get digit from str2 or 0 if index is out of bounds
    int sum = digit1 + digit2 + carry; // Calculate the sum of the digits and carry
    carry = sum / 10; // Update carry for the next iteration
    

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