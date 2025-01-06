#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char o,e;
    cin>>a>>o>>b>>e>>c;

    if(o=='+') (a+b==c)? cout<<"Yes":cout<<a+b;
    if(o=='-') (a-b==c)? cout<<"Yes":cout<<a-b;
    if(o=='*') (a*b==c)? cout<<"Yes":cout<<a*b;

    return 0;
}