#include<iostream>
using namespace std;

int last_occurrence(string str, char target, int index) {
    if(index < 0) {
        return -1; // Base case: target not found
    }
    if(str[index] == target) {
        return index; // Target found at the current index
    }
    // Recursive call to check the previous index
    return last_occurrence(str, target, index - 1);
}

int main() {
    string str = "hello";
    char target = 'l';
    int index = str.length() - 1;
    cout << last_occurrence(str, target, index) << endl;
    return 0;
}