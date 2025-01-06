#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string::iterator it;
    int indexCnt=-1;
    for(it=s.begin();it<s.end();it++)

    {
        indexCnt ++;
        if(*it=='E' && *(it+1)=='G' && *(it+2)=='Y' && *(it+3)=='P' && *(it+3)=='P' && *(it+4)=='T')
        {
            s.replace(indexCnt,5," ");
        }
    }

    cout<<s;
    return 0;
} 