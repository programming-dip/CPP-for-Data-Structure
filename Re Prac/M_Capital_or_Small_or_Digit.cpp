#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    (x>=48 && x<=57)? cout<<"IS DIGIT"<<endl : cout<<"ALPHA"<<endl;
    if(x>=97 && x<=122) cout<<"IS SMALL";
    if(x>=65 && x<=90) cout<<"IS CAPITAL";

    return 0;
}