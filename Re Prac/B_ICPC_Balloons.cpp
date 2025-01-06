#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char a[n];
        cin>>a;

        int frq[26]={0};
        int ballon=0;

        for(int j=0;j<n;j++)
        {
            (frq[a[j]-'A']>0)? ballon++ : ballon+=2;
            frq[a[j]-'A']++;
        }


        cout<<ballon<<endl;
    }
    return 0;
}