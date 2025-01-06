#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    getline(cin,s);
    cin>>x;
    int xCnt=0;
    string w;
    stringstream ss(s);
    while(ss>>w)
    {
        if(w==x) xCnt++;
    } 

    cout<<xCnt;
    return 0;
}