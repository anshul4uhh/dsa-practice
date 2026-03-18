#include<iostream>
#include<string>
using namespace std;
string removeAdjacentDuplicates(const string& str) {
    if (str.empty()) {
        return "";
    }
    int length = str.length();
    string result;
    result += str[0]; // Add the first character to the result
    int i=1,j=0;
    while(i<length){
        if(j>=0 && result[j]==str[i]){
            result.pop_back();
            j--;
        }else{
            result.push_back(str[i]);
            j++;
        }
        i++;
    }


    return result;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Original string: " << input << endl;
    string output = removeAdjacentDuplicates(input);
    cout << "String after removing adjacent duplicates: " << output << endl;

    return 0;
}