// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long long int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        long long int mn=LLONG_MAX;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mn = min(mn, a[i]+a[j]+j-i);
                
            }
        }

        cout<<mn<<endl;
    }
    return 0;
}