#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a; 
        //
        int x=0,y=0;
        for(int j=0;j<6;j++)
        {
            if(j<3) x+=a[j];
            if(j>=3) y+=a[j];
        }

        (x==y)? cout<<"YES" : cout<<"NO";
        cout<<endl;
    }
    return 0;
}