#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, -7, 4, 0, 5};
    int maxi= *max_element(v.begin(), v.end());
    int mini= *min_element(v.begin(), v.end());
    for(int i=maxi-1; i>=mini+1; i--){
        for(auto it: v){
            if(i>0 && it-1>=i){
                cout<<"* ";
            }
            else if(i==0 && (it>0 || it<0)){
                cout<<"* ";
            }
            else if(i<0 && it+1<=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}
