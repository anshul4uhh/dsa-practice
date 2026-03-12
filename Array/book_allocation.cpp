#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

bool is_possible(vector<int>& arr, int k, int students) {
    int count = 1; // Start with one student
    int current_pages = 0;
    
    for(int pages : arr) {
        if(pages > k) { // If a single book has more pages than k, it's not possible
            return false;
        }
        if(current_pages + pages > k) { // If adding this book exceeds the page limit
            count++; // Need another student
            current_pages = pages; // Start counting pages for the new student
            if(count > students) { // If we need more students than available
                return false;
            }
        } else {
            current_pages += pages; // Add pages to the current student's workload
        }
    }
    return true; // All books can be allocated within the given page limit and students
}

int min_time(vector<int>& arr, int students) {
    int start = *max_element(arr.begin(), arr.end()); 
    int end = accumulate(arr.begin(), arr.end(), 0); 
    int result = -1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2; // Midpoint of the current page range
        if(is_possible(arr, mid, students)) { 
            result = mid; 
            end = mid - 1; 
        } else {
            start = mid + 1; 
        }
    }
    return result; 
}
int main() {
    vector<int> arr{12,34,67,90}; // Pages in each book
    int students = 2; // Number of students available
    cout << "Minimum pages allocated to a student: " << min_time(arr, students) << endl;
    return 0;
}