#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }

    int mn = INT_MAX, mx=INT_MIN;
    
    for(int i=0;i<3;i++)
    {
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }

    cout<<mn<<" "<<mx;

    return 0;
}