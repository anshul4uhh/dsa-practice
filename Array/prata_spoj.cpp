#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool is_prata_done(vector<int>& rank, int time, int prata) {
    
    int count = 0;
    for(int r:rank){
        int k  = (-1 + sqrt(1 + 8*time/r)) / 2; // Solving k(k+1)/2 <= time/r
        count += k;
        if(count >= prata) {
            return true; // Enough pratas can be cooked in the given time
        }
    }
    return false; // Not enough pratas can be cooked in the given time
}

int min_time(vector<int>& rank, int prata) {
    int start = 0;
    int end = *min_element(rank.begin(), rank.end()) * prata * (prata + 1) / 2; // Worst case time
    cout << "Initial time range: " << start << " to " << end << endl;
    int result = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(is_prata_done(rank, mid, prata)) {
            result = mid; // Store the last valid time
            end = mid - 1; // Try to find a smaller time
        } else {
            start = mid + 1; // Need more time
        }
    }
    return result;
}

int main() {
    vector<int> rank{1, 1,1,1,1,1,1,1}; // 8 cooks with rank 1
    int prata = 8;
    cout << "Minimum time to cook " << prata << " pratas: " << min_time(rank, prata) << endl;
    return 0;
}