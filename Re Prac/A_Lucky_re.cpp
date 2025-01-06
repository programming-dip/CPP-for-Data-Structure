#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string num;
        cin>>num;
        int x=0,y=0;
        
        for(int j=0;j<6;j++)
        {
            if(j<3) x+=num[j];
            if(j>=3) y+=num[j];
        }

        (x==y)? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}