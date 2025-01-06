#include <bits/stdc++.h>
using namespace std;

int power(int x, int i)
{
    int res=1;
    for(int j=0;j<i;j++)
    {
        res*=x;
    }

    return res;
}

int main()
{
    int x,n,s=0;
    cin>>x>>n;
    for(int i=2;i<=n;i+=2)
    {
        s+=power(x,i);
    }

    cout<<s;
    return 0;
}