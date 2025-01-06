#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool fW = true;
    while(ss>>word)
    {

        string::iterator it;
        if (fW==true)
        {
            for(it=word.end()-1;it>=word.begin();it--)
        {
            cout<<*it;
        }
        }
        else
        {
            cout<<" ";
            for(it=word.end()-1;it>=word.begin();it--)
        {
            cout<<*it;
        }
        }

        fW = false;
        

        

    }
    
    return 0;
}