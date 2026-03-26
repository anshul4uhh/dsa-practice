#include<iostream>
using namespace std;

void add_strings(string str1, string str2, string result, int index1, int index2) {
    if(index1 >= str1.length() && index2 >= str2.length()) {
        cout << "Result of addition: " << result << endl;
        return;
    }
    int digit1 = (index1 < str1.length()) ? str1[str1.length() - 1 - index1] - '0' : 0;
    int digit2 = (index2 < str2.length()) ? str2[str2.length() - 1 - index2] - '0' : 0;
    int sum = digit1 + digit2 + (result.empty() ? 0 : result[0] - '0');
    result.insert(result.begin(), (sum % 10) + '0'); // Add the last digit of the sum to the result
    add_strings(str1, str2, result, index1 + 1, index2 + 1); // Recursive call for the next digits
}