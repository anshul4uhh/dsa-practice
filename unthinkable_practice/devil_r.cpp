#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int a=0,mx=0;
    for(int i=0;i < s.length();i++)
    {
        a++;
        if(s[i]=='@'||s[i]=='$')
            {mx=max(a,mx);a=0;}
    }
    cout<< mx;
}