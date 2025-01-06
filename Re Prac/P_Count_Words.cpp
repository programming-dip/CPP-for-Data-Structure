#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin,s);
    string::iterator it;
    int cntWrd=0;

    for(it=s.begin();it<s.end();it++)
    {
        
        if(isalpha(* it))
        {
            if(* (it+1) == ' '|| * (it+1)== '\0' || * (it+1)== '!' || * (it+1)== '.' || * (it+1)== ',' || * (it+1)== '?')
            cntWrd++;
        } 
    }

    cout<<cntWrd;

    return 0;
}