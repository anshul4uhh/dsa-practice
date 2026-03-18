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
    
}