#include<iostream>
using namespace std;

void remove_occurences(string& s, string& part){
    int index = s.find(part);
    if(index == string::npos) {
        cout << "Final string after removing all occurrences: " << s << endl;
        return; // Base case: no more occurrences found
    }
    
}