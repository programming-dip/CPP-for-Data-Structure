// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include<bits/stdc++.h>
using namespace std;

long long int mathPw(int x, int n)
{
long long int res=0;


    for(int i=2;i<=n;i+=2)
    {
        
        res+=pow(x,i);
        //cout<<"Pow :"<<i<<"Res: "<<res<<endl; 
        
    }

    return res;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<mathPw(x,n);
    return 0;
}