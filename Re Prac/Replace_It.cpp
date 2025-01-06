#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    string s,x;
    cin>>s>>x;
    int z=s.find(x,0);

    while (z!=-1)
    {
        s.replace(z,x.size(),"$");
        z=s.find(x,z+1);
    }

    cout<<s<<endl;
    }  
    return 0;
} 