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
        char s[n];
        cin>>s;

        int ballons=0;
        int A[26] ={0};
        for(int i=0;i<n;i++)
        {
            
            ((A[s[i]-'A'])<1)? ballons+=2 : ballons+=1;
            A[s[i]-'A']++;
        }

        cout<<ballons<<endl;
    }
    return 0;
}