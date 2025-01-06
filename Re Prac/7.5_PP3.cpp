#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,w,singW;
    getline(cin,s);
    //cin.ignore();
    cin>>w;
    int wCnt=0;

    stringstream ss(s);
    while(ss>>singW)
    {
        if(singW==w) wCnt++;
    }

    cout<<wCnt;

    return 0;
}