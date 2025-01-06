#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string num;
    cin>>num;
    (num[0]+num[1]+num[2]==num[3]+num[4]+num[5])? cout<<"Yes"<<endl: cout<<"No"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}