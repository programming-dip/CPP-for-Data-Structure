// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include <bits/stdc++.h>
using namespace std;

void printm(int n, char c)
{
    for(int i=0;i<n;i++)
    {
        cout<<c<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        char c;
        cin>>n>>c;
        printm(n,c);
        cout<<endl;
        
    }
    return 0;
}