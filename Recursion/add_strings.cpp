#include<iostream>
using namespace std;

void add_strings(string str1, string str2, string result, int index1, int index2, int carry) {
    if(index1 >= str1.length() && index2 >= str2.length()) {
        if(carry > 0) {
            result.insert(result.begin(), carry + '0');
        }
        cout << "Result of addition: " << result << endl;
        return;
    }
    int digit1 = (index1 < str1.length()) ? str1[str1.length() - 1 - index1] - '0' : 0;
    int digit2 = (index2 < str2.length()) ? str2[str2.length() - 1 - index2] - '0' : 0;
    int sum = digit1 + digit2 + carry;
    result.insert(result.begin(), (sum % 10) + '0');
    carry = sum / 10;


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