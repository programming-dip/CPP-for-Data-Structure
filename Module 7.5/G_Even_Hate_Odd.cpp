// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
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
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int evenCnt=0,oddCnt=0;
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
        {
            (a[i]%2==0)? evenCnt++ : oddCnt++;  
        }

        if(evenCnt==oddCnt)
        {
            cout<<"0"<<endl;
        }
        else if(evenCnt>oddCnt)
        {
            cout<<(n/2)-oddCnt<<endl;
        }
        else if(oddCnt>evenCnt)
        {
            cout<<(n/2)-evenCnt<<endl;
        }
        }
    }

    return 0;
}