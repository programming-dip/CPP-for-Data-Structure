// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int indexCount=-1;
    string:: iterator it;
    for(it=s.begin();it<s.end();it++)
    {
        indexCount++;
        if(*it=='E' && *(it+1)=='G' && *(it+2)=='Y' && *(it+3)=='P' && *(it+4)=='T')
        {
            s.replace(indexCount,5," ");
        }
    }

    for(it=s.begin();it<s.end();it++)
    {
        cout<<*it;
    }
    return 0;
}