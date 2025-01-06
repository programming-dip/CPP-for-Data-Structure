#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string::iterator it;
    int  cntWord =0;
    for(it=s.begin();it<s.end();it++)
    {
        bool isLetter=false;
        if(isalpha(*it))
        {
             isLetter=true;
             if(*(it+1)=='\0') cntWord++;
        }
        if(isLetter==false) 
        {
            if((*it ==' ' || *it=='!' || *it=='.' || *it=='?' || *it==',') && (isalpha(*(it+1)) || *(it+1)=='\0')) cntWord++;
        }
    }

    cout<<cntWord;
    return 0;
}