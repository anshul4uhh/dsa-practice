#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
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

int main() {
    int n;  
    cout << "Enter the number of integers: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    string output = largestNumber(nums);
    cout << "Largest number formed by concatenating the integers: " << output << endl;
    return 0;
}