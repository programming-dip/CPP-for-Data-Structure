#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    
    for(int i=0;i<t;i++)
    {
        int f3=0,l3=0;
        int a[6];
        for(int j=0;j<6;j++)
        {
            cin>>a[j];
        }

        for(int j=0;j<3;j++)
        {
            f3+=a[j];
        }

        for(int j=3;j<6;j++)
        {
            l3+=a[j];
        }

        (f3==l3)? cout<<"Yes"<<endl : cout <<"No"<<endl;

    }
    return 0;
}