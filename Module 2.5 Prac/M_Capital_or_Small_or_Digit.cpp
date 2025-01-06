// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    (x>=48 && x<=57)? cout<<"IS DIGIT" : cout<<"ALPHA";
    cout<<endl;
    if(x>='a' && x<='z')  cout<<"IS SMALL";
    if(x>='A' && x<='Z')  cout<<"IS CAPITAL";

    return 0;
}