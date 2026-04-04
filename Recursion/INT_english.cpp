#include<iostream>
#include<vector>
using namespace std;

string int_to_english_helper(int num) {
    if(num == 0) return "Zero"; // Base case: zero is represented as "Zero"
    if(num < 20) { // Handle numbers from 1 to 19
        vector<string> below_20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                                   "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                                   "Seventeen", "Eighteen", "Nineteen"};
        return below_20[num];
    }
    if(num < 100) { // Handle numbers from 20 to 99
        vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        return tens[num / 10] + (num % 10 ? " " + int_to_english_helper(num % 10) : "");
    }
    if(num < 1000) { // Handle numbers from 100 to 999
        return int_to_english_helper(num / 100) + " Hundred" + (num % 100 ? " " + int_to_english_helper(num % 100) : "");
    }
    if(num < 1000000) { // Handle numbers from 1,000 to 999,999
        return int_to_english_helper(num / 1000) + " Thousand" + (num % 1000 ? " " + int_to_english_helper(num % 1000) : "");
    }
    if(num < 1000000000) { // Handle numbers from 1,000,000 to 999,999,999
        return int_to_english_helper(num / 1000000) + " Million" + (num % 1000000 ? " " + int_to_english_helper(num % 1000000) : "");
    }
    // Handle numbers from 1,000,000,000 and above
    return int_to_english_helper(num / 1000000000) + " Billion" + (num % 1000000000 ? " " + int_to_english_helper(num % 1000000000) : "");
}
string int_to_english(int num) {
    return int_to_english_helper(num); // Start the recursive helper function
}
