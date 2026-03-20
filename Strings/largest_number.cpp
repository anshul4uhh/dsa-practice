#include<iostream>
#include<string>
using namespace std;

bool compare(string a, string b){
    string ab = a+b;
    string ba = b+a;
    return ab>ba;
}

string largestNumber(vector<int>& nums) {
    vector<string> strNums;
    for(int num : nums){
        strNums.push_back(to_string(num));
    }
    sort(strNums.begin(),strNums.end(),compare);
    string result;
    for(string str : strNums){
        result += str;
    }
    if(result[0] == '0') return "0";
    return result;
}