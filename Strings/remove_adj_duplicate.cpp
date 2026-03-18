#include<iostream>
#include<string>
using namespace std;
string removeAdjacentDuplicates(const string& str) {
    if (str.empty()) {
        return "";
    }

    string result;
    result += str[0]; // Add the first character to the result

    for (size_t i = 1; i < str.length(); ++i) {
        if (str[i] != str[i - 1]) {
            result += str[i]; // Add character if it's different from the previous one
        }
    }

    return result;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = removeAdjacentDuplicates(input);
    cout << "String after removing adjacent duplicates: " << output << endl;

    return 0;
}