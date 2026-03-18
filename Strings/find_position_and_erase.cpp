#include<iostream>
#include<string>
#include<cstring>
using namespace std;

string erase_substring(string& str,string& part){
    if(str.empty()){
        return " ";
    }
    int length = part.length();
    while(str.find(part) != string::npos){
        int pos = str.find(part);
        str.erase(pos,length);
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Original string: " << input << endl;
    string part;
    cout << "Enter a string part: ";
    getline(cin, part);
    cout << "String part: " << part << endl;
    string output = erase_substring(input,part);
    cout << "String after removing adjacent duplicates: " << output << endl;

    return 0;
}