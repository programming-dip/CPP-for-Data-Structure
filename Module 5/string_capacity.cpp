#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;

    string a = "Hfhgudfghuefhkjewfnuefghhnjbnjnfgberhwfgh";
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;
    cout<<a<<endl;
    a.clear();
    cout<<a<<endl;
    cout<<a.size()<<endl;

    (a.empty()==true)? cout<<"Empty"<<endl : cout<<"Not Empty"<<endl;

    a="Hello_World";
    a.resize(5);
    cout<<a<<endl;
    a.resize(8,'X');
    cout<<a<<endl;
    return 0;
}