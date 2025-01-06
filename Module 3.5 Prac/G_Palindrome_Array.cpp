// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    

    int palFlag=1;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[j]) palFlag=0;
        j--;
    }

    (palFlag==1)?cout<<"YES":cout<<"NO";
    
    return 0;
}