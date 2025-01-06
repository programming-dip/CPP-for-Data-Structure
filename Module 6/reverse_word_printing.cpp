#include <bits/stdc++.h>
using namespace std;

void print(stringstream & st)
{
    string word;
    if(st>>word)
    {
        print(st);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}