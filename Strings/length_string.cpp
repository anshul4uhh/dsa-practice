#include<iostream>
#include<string>
using namespace std;
int main() {
    string str = "Hello, World!";
    cout << "Length of the string: " << str.length() <<endl;
    int length = 0;
    for (char c : str) {
        length++;
    }
    cout << "Length of the string (calculated manually): " << length << endl;
    return 0;
}