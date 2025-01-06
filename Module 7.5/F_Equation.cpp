// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include<bits/stdc++.h>
using namespace std;

long long int mathPw(int x, int n)
{
long long int res=0;
int pw=0;

    for(int i=0;i<=n;i++)
    {
        if(i==0)
        {
            pw+=2;
           continue;
        }
        if(pw>=n) break;

        long long int pwOut=1;
        for(int j=0;j<pw;j++)
        { 
            pwOut*=x;
            
        }
        res+=pwOut;
        pw+=2;
        
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
