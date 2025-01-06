#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,w;
    getline(cin,s);
   
    stringstream ss(s);
    bool isRatul = false;
    while (ss>>w)
    {
        if(w=="Ratul")
        {
            isRatul=true;
            break;
        }
        
    }

    (isRatul==true)? cout<<"YES" : cout<<"NO";
    return 0;
}