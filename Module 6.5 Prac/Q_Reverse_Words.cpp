// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool firstW = true;
    while (ss>>word)
    {
        string:: iterator it;
        if(firstW)
        {
            for(it=(word.end())-1;it>=word.begin();it--)
        {
            cout<<*it;
        }
        firstW =false;
        }else
        {
            cout<<" ";
            for(it=(word.end())-1;it>=word.begin();it--)
        {
            cout<<*it;
        }
        
        }
        
    }
    
    return 0;
}