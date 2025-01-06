#include <bits/stdc++.h>
using namespace std;


class CustomSort
{
    public:
        char c;
        int cnt;
};

bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt>b.cnt) return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    CustomSort frq[26];
    for(char c='a';c<='z';c++)
    {
        frq[c-'a'].c=c;
        frq[c-'a'].cnt={0};
    }

    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        frq[ch-'a'].cnt++;

    }

    sort(frq,frq+26,cmp);

    for(int i=0;i<26;i++)
    {
        
         if(frq[i].cnt>0)
         {
             for(int j=0;j<frq[i].cnt;j++)
             {
                 cout<<frq[i].c;
             }
         }
    }
    

}
