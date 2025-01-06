#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);
    string checkWord;
    bool isRakib=false;

    while(ss>>checkWord)
    {
        if (checkWord == "Ratul")
        {
            isRakib = true;
            break;
        }
    }

    (isRakib==true)? cout<<"YES" : cout<<"NO";

    return 0;
}