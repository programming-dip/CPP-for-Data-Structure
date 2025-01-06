#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;
        int z = s.find(x);
        while(z!=-1)
        {
            s.replace(z,x.size(),"$");
            z = s.find(x,z+1);
        }
        cout<<s<<endl;
    }
}
