#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int evenCnt=0,oddCnt=0,minOp;

    for(int i=0;i<n;i++)
    {
        (a[i]%2==0)? evenCnt++:oddCnt++; 
    }

    if(n%2==0)
    {
        if(evenCnt==oddCnt) 
    {
        minOp=0;
    } else if (evenCnt>oddCnt)
    {
        minOp = (n/2)-oddCnt;
    } else if (oddCnt>evenCnt)
    {
        minOp = (n/2)-evenCnt;
    }
    }else 
    {
        minOp=-1;
    }

    cout<<minOp<<endl;
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