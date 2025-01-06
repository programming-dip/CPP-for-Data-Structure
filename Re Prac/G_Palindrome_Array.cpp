#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bool pali=1;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[j]) pali =0;
        j--;
    }

    (pali==1)? cout<<"YES" : cout<<"NO";
    
    

    return 0;
}