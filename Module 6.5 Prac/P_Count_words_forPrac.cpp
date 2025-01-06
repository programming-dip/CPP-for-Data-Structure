// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        int lCount=0;
        string::iterator it;
        for(it=word.begin();it<word.end();it++)
        {
            if(isalpha(*it)) lCount++;
        }
        
        if(lCount>0) cnt++;
    }
    cout<<cnt;
    return 0;
}